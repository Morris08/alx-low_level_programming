#!bin/bash
gcc -Wall -pedantic -Werror -Wexta -c *.c
ar rc liball.a  *.o
ranlib liball.a
