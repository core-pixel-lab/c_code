# 1. 定义编译器
CC = gcc

# 2. 定义编译选项
# -Iinclude 意思是：告诉 gcc 去当前目录下的 include 文件夹里找 .h 头文件
# -g 意思是：生成调试信息（方便以后用 gdb 调试）
# -Wall 意思是：打开所有警告（帮你看代码有没有毛病）
CFLAGS = -Iinclude -g -Wall

# 3. 定义最终生成的可执行文件名
TARGET = demo01

# 4. 定义源代码文件在哪里
# 这里指的是 src 目录下的所有 .c 文件
SRC = src/*.c

# --- 下面是具体的指令 ---

# 默认目标：当你只敲 make 时，它执行这里
all: $(TARGET)

# 编译规则：生成 TARGET，依赖于 SRC
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# 清理规则：当你敲 make clean 时，删除生成的文件
clean:
	rm -f $(TARGET)