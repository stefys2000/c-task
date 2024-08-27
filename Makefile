CC = gcc
CFLAGS = -Wall -Wextra -Wno-implicit-function-declaration
SRC = main.c
TARGET = main

all: $(TARGET)

$(TARGET): $(SRC)
	@echo "Compiling $(SRC)"
	@$(CC) $(CFLAGS) $< -o $@
	@echo "Compilation complete! 🚀"

clean:
	@echo "Cleaning up"
	@rm -f $(TARGET)
	@echo "Cleanup complete! 🧹"

.PHONY: all clean

#cl6x --include_path=$TI_INCLUDE --compile_only --check_misra=all -ps main.c
#check misra