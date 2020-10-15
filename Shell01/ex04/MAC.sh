#! /bin/sh
ifconfig | grep  ether | sed -n -e 's/^.*ether //p'
