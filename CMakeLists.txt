cmake_minimum_required(VERSION 3.21)
project(gnl C)

set(CMAKE_C_STANDARD 99)
add_compile_options(-Wall -Wextra -Werror -D BUFFER_SIZE=42)

set(SRC_MAN get_next_line.c
		get_next_line_utils.c main.c)

set(SRC_BONUS get_next_line_bonus.c
		get_next_line_utils_bonus.c)

add_executable(gnl_man ${SRC_MAN} get_next_line.h)
add_executable(gnl_bonus ${SRC_BONUS} get_next_line_bonus.h)
