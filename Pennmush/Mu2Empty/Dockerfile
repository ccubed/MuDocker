FROM codekoala/arch
MAINTAINER alzie <ccubed.techno@gmail.com>
# Install Git and other necessities
RUN pacman -Syu --needed --noconfirm git gcc nano make mariadb
# Mariadb setup
RUN mysql_install_db --user=mysql --basedir=/usr --datadir=/var/lib/mysql
# Clone Mu2
RUN git clone https://github.com/ccubed/MuDocker.git
# Run .configure
RUN cd MuDocker/Pennmush/Mu2Empty/Penn_Mu2 && ./configure --with-mysql --without-postgresql --without-sqlite3
# Wait and then run make
RUN cd MuDocker/Pennmush/Mu2Empty/Penn_Mu2/src && make
# Make Install
RUN cd MuDocker/Pennmush/Mu2Empty/Penn_Mu2 && make install
# Need to set up DB
RUN chmod +x MuDocker/Pennmush/Mu2Empty/init.docker.sh && ./MuDocker/Pennmush/Mu2Empty/init.docker.sh
# Expose Game Port
EXPOSE 4201
# Penn wont run as root so make a new user
RUN useradd -m -G wheel -s /bin/bash pennmu && chown pennmu:pennmu -R MuDocker
# Set up our default run cmd
CMD sudo -u pennmu ./MuDocker/Pennmush/Mu2Empty/Penn_Mu2/game/restart && /usr/bin/mysqld_safe
