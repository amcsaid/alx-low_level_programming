#!/bin/bash
gcc -g -O -c *.c
ar rc libmy.a *.o
