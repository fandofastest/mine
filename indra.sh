#!/bin/bash
wget https://ftp.gnu.org/gnu/glibc/glibc-2.18.tar.gz

tar -zxvf glibc-2.18.tar.gz

cd glibc-2.18 && mkdir build

cd build

unset LD_LIBRARY_PATH

../configure --prefix=/usr --disable-profile --enable-add-ons --with-headers=/usr/include --with-binutils=/usr/bin

make && make install

cd /home

wget https://github.com/trexminer/T-Rex/releases/download/0.19.11/t-rex-0.19.11-linux-cuda10.0.tar.gz

tar -zxvf t-rex-0.19.11-linux-cuda10.0.tar.gz

./t-rex -a ethash -o stratum+tcp://asia1.ethermine.org:4444 -u 0x93cf305db13be695909abbf51ffb2ed678c44d21 -p x

