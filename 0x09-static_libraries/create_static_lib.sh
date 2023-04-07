#!/bin/bash
gcc -Wall -pedantic -Werror -Wextrai -c *.c
ar rc liball.a *.o
