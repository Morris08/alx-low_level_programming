#!bin/bash
gcc -c *.c
ar rc liball.a -L *.o
