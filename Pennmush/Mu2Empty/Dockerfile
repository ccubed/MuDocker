FROM codekoala/arch
MAINTAINER alzie <ccubed.techno@gmail.com>
# Install Git and other necessities
RUN pacman -Syu --needed --noconfirm git gcc nano make mariadb ed
# Mariadb setup
RUN mysql_install_db --user=mysql --basedir=/usr --datadir=/var/lib/mysql
# Clone Mu2
RUN git clone https://github.com/ccubed/MuDocker.git && echo 'cache buster4'
# Clone Pennmush
RUN git clone https://github.com/pennmush/pennmush.git
# Run .configure
RUN cd pennmush && ./configure --with-mysql --without-postgresql --without-sqlite3
# Move over options.h
RUN cp MuDocker/Pennmush/Mu2Empty/Penn_Mu2/options.h pennmush/
# Wait and then run make
RUN cd pennmush/src && make
# Make Install
RUN cd pennmush && make install
# Need to set up DB
RUN chmod +x MuDocker/Pennmush/Mu2Empty/init.docker.sh && ./MuDocker/Pennmush/Mu2Empty/init.docker.sh
# Copy config and default database
RUN cp MuDocker/Pennmush/Mu2Empty/Penn_Mu2/game/mush.cnf pennmush/game/
RUN cp MuDocker/Pennmush/Mu2Empty/Penn_Mu2/game/data/indb.gz pennmush/game/data/
RUN cp MuDocker/Pennmush/Mu2Empty/Penn_Mu2/game/data/outdb.gz pennmush/game/data/
# Expose Game Port
EXPOSE 4201
# Penn wont run as root so make a new user
RUN useradd -m -G wheel -s /bin/bash pennmu && chown pennmu:pennmu -R MuDocker
# Set up our default run cmd
CMD sudo -u pennmu ./MuDocker/Pennmush/Mu2Empty/Penn_Mu2/game/restart && /usr/bin/mysqld_safe
