#!/usr/bin/env bash

apt-get update
apt-get upgrade
# snap install cmake ---classic
apt-get install -y g++ cmake make git build-essential python3

apt-get install -y libboost-all-dev libssl-dev libcurl4-openssl-dev libgsasl7-dev
apt-get install -y sendmail doxygen gnutls-dev

git clone https://github.com/akhtyamovpavel/PatternsCollection.git
chown -R vagrant:vagrant /home/vagrant/PatternsCollection
cd /home/vagrant/PatternsCollection && mkdir build && cd build
cmake .. && make
