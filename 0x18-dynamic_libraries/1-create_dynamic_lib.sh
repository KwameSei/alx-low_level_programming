#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -o liball.so -shared *.c -fpic 
