#!/bin/bash
wget -P /tmp https://github.com/Osei365/alx-low_level_programming/raw/master/0x18-dynamic_libraries/jackpotwin.so
export LD_PRELOAD=/tmp/jackpotwin.so
