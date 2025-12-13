# Compiler - we are using gcc for this project
CC = gcc

# Compiler flags - we want to enable all warnings and use the ANSI C standard that is used in KnR
# -g: Compile with debugging symbols for GDB
# -Wall: Enable all compiler's warning messages
# -O0: Disable optimizations for easier debugging
# -std=c89: Use the ANSI C standard (C89)
CFLAGS = -g -Wall -O0 -std=c89

# Linker flags - no special flags needed for this simple project

# Out of source build
SRC_DIR = ../src
VPATH   = $(SRC_DIR)

# Target Executable
TARGET = invalidChar.out

# Source files
SOURCES = invalidChar.c

# Object files
OBJECTS = $(SOURCES:.c=.o)

# Default target
all: $(TARGET)

# Rule to create the target executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to create object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJECTS)	