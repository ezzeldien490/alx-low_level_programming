#!/bin/bash
gcc -Wall -pendantic -werror  -wextra -c *.c
ar res liball.a *.o
