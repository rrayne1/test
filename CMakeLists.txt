cmake_minimum_required(VERSION 3.15)
project(ft_ls C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-Wall -Wextra -Werror")
add_executable(ft_ls main.c ft_ls.h R-flag.c)