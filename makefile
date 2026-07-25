# Compiler and Flags
CC       := gcc
CFLAGS   := -Wall -Wextra -Iheaders -O2
TARGET   := CasinoGame.exe

# Directories
SRC_DIR   := src
BUILD_DIR := build

# File Discovery
# Finds main.c, as well as any .c files inside util/ and games/
SRCS := $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*/*.c)

# Maps source files to build files (e.g., src/games/chess.c -> build/games/chess.o)
OBJS := $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Default Rule
all: $(TARGET)

# Link the Final Binary
$(TARGET): $(OBJS)
	@mkdir -p $(dir $@)
	$(CC) $(OBJS) -o $@

# Compile Source Files to Object Files
# Automatically creates the matching subfolder in build/ before compiling
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean Build Artifacts
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
