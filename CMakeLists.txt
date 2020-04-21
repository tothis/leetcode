# 指定cmake最低版本 不指定会收到警告信息
cmake_minimum_required(VERSION 3.15)
# 工程名称
project(algorithm C)

# 指定c语言标准
set(CMAKE_C_STANDARD 11)

# 生成可执行文件
add_executable(multiply multiply.c)
add_executable(shuffle shuffle.c)