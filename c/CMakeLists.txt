# 指定cmake最低版本 不指定会收到警告信息
cmake_minimum_required(VERSION 3.15)
# 工程名称
project(algorithm C)

# 指定c语言标准
set(CMAKE_C_STANDARD 11)

# 生成可执行文件
add_executable(multiplication-table algorithm/multiplication-table.c)
add_executable(shuffle algorithm/shuffle.c)
add_executable(fibonacci-sequence algorithm/fibonacci-sequence.c)
add_executable(bubble-sort algorithm/bubble-sort.c)

add_executable(happy-number problem/happy-number.c)
add_executable(number-of-steps-to-reduce-a-number-to-zero problem/number-of-steps-to-reduce-a-number-to-zero.c)
add_executable(subtract-the-product-and-sum-of-digits-of-an-integer problem/subtract-the-product-and-sum-of-digits-of-an-integer.c)
add_executable(jewels-and-stones problem/jewels-and-stones.c)
add_executable(decompress-run-length-encoded-list problem/decompress-run-length-encoded-list.c)
add_executable(minimum-path-sum problem/minimum-path-sum.c)