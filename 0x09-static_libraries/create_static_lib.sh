#!/bin/bash
gcc -Wall -Wextra -Wwerror -pedantic -c *.c
ar rc liball.a *.o
