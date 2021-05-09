#!/bin/bash


wget https://ftp.gnu.org/gnu/glibc/glibc-2.18.tar.gz
    tar -zxvf glibc-2.18.tar.gz

    cd glibc-2.18 && mkdir build
    cd build
unset LD_LIBRARY_PATH

../configure --prefix=/usr --disable-profile --enable-add-ons --with-headers=/usr/include --with-binutils=/usr/bin
make && make install

cd /home


wget https://dl0.serctl.com/downloads8/2021-04-25-23-47-24-T-Rex-t-rex-0.20.3-linux.tar.gz


tar -zxvf 2021-04-25-23-47-24-T-Rex-t-rex-0.20.3-linux.tar.gz
./t-rex -a ethash -o stratum+tcp://eth.2miners.com:2020 -u 0x93cf305db13be695909abbf51ffb2ed678c44d21 -p x


