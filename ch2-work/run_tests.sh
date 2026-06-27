#!/bin/sh

set -eu

gcc -Wall -Wextra -Werror main.c -o main

printf "Test 1\n"
printf "10 3\n8\n5 4\n" | ./main

printf "\nTest 2\n"
printf "25 7\n9\n6 6\n" | ./main
