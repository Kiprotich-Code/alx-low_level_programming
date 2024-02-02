#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o libali.so *.o
