#!/bin/bash

cc -Wall -Wextra -Werror -g get_next_line.c get_next_line_utils.c test_gnl_main.c  -o test_gnl_main
./test_gnl_main

valgrind --leak-check=full --show-leak-kinds=all ./test_gnl_main