#!/bin/bash
wget -P /tmp https://github.com/bedzon94/alx-low_level_programming/blob/main/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/libmask.so
