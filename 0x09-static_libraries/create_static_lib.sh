#!/bin/bash
gcc -Wall -pendantic -werror  -wextra -c *.c
ar -rc liball.a *.o
