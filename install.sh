#!/bin/bash

cd src

sudo make install

sudo modprobe igb

sudo ifconfig -a

