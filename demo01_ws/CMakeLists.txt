# 1. 规定 cmake 最低版本（通常写 3.0 或 3.10 即可）
cmake_minimum_required(VERSION 3.10)

# 2. 给项目起个名字
project(demo01)

# 3. 【关键】告诉 cmake 头文件在哪里 (.h)
# 相当于 gcc 的 -Iinclude
include_directories(include)

# 4. 【关键】告诉 cmake 源文件在哪里 (.c)
# 这行命令的意思是：把 src 目录下所有的 .c 文件找到，存到变量 SRC_LIST 里
file(GLOB SRC_LIST "src/*.c")

# 5. 生成可执行文件
# 相当于 gcc -o demo_app ...
# 语法：add_executable(最终程序名 源文件列表)
add_executable(demo01 ${SRC_LIST})
