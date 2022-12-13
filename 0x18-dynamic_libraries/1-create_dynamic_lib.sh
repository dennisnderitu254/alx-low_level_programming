#!/usr/bin/bash
gcc -Wall -c -fPIC *.c
gcc -shared *.c -o liball.so