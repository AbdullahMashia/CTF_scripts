#! /bin/bash

dir="/home/aw/CTFs/$1"
cd /home/aw/CTFs


if [ ! -d "$dir" ]; then
mkdir -p $dir
echo "======> $1  created "

else
echo "======> directory already exists"

fi
sleep 1

echo " "
echo "======> checking dhcp "
sudo dhcpcd  --waitip
echo " "

echo "======> connecting to try hack me network via VPN"
sudo killall openvpn
sudo openvpn --config  /home/aw/Downloads/eu-west-3-999mashia-regular.ovpn --daemon


echo " " 


echo "======> checking connection"

connect=$(ping -c4 $2 | awk '{print -NF}' |  grep 8)
sleep 1

echo " " 

if [[ "$connect"  =~ 8 ]]; then 
echo "======> host is connected"
echo " " 
echo "=====> You are all set"

else
 echo "!=!!!!!! unable to connect"

fi

