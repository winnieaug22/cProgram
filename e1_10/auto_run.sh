#!/usr/bin/env bash

# data: make
cd input;
make;
cd ..;

# e1_10: make
make;
###############################################################################
./input/input > data;
echo "\n === OUTPUT START === \n"
cat data;
./e1_10 < data;
echo "\n === OUTPUT END === \n"

###############################################################################
# e1_10: make
make clean_all;

#data: make clean
cd input;
make clean_all;
cd ..;
