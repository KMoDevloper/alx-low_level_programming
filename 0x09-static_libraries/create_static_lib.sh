#!/bin/bash
gcc -c *.c -Wall -Werror -Wextra -pedantic -std=gnu89
ar rc liball.a *.o
rm -f *.o
