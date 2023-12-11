#!/bin/bash
gcc -Wall -pedantic -Wextra -Werror -c -fPIC *.c
gcc -Wall -pedantic -Wextra -Werror -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
