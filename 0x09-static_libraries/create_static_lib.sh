#!/bin/bash
gcc -Wall -Wextrai -Werror -pedantic -c *.c
ar rc liball.a *.o
