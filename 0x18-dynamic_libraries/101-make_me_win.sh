#!/bin/bash
wget -P /tmp https://github.com/Osei365/alx-low_level_programming/blob/master/0x18-dynamic_libraries/random.so
export LD_PRELOAD=/tmp/random.so
