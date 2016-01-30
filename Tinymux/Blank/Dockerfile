FROM codekoala/arch
MAINTAINER alzie <ccubed.techno@gmail.com>
# Install Git and other necessities
RUN pacman -Syu --needed --noconfirm git gcc nano make mariadb
# Mariadb setup
RUN mysql_install_db --user=mysql --basedir=/usr --datadir=/var/lib/mysql
# Clone Mu2
RUN git clone https://github.com/ccubed/MuDocker.git
# Run .configure
RUN cd MuDocker/Tinymux/Blank/tinymux/mux/src && ./configure --enable-stubslave
# Wait and then run make
RUN cd MuDocker/Tinymux/Blank/tinymux/mux/src && make
# Configure modules
RUN cd MuDocker/Tinymux/Blank/tinymux/mux/src/modules && ./configure
# Make modules
RUN cd MuDocker/Tinymux/Blank/tinymux/mux/src/modules && make
# Need to set up DB
RUN /usr/bin/mysqld_safe && sleep 5 && mysql -u root -e "CREATE DATABASE Mu2"
# Expose Game Port
EXPOSE 2860
# Set up mux user
RUN useradd -m -G wheel -s /bin/bash pennmu && chown pennmu:pennmu -R MuDocker
# Set up our default run cmd
CMD sudo -u pennmu ./MuDocker/Tinymux/Blank/tinymux/mux/game/Startmux && /usr/bin/mysqld_safe
