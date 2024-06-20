# Core variables
MAIN_FILE := main.cpp
SOURCE_FILES_FOLDER := game/source_files
BIN_FOLDER := bins
TARGET := $(BIN_FOLDER)/test_compilation

# Default target
all: $(TARGET)

# Making binaries
$(TARGET): $(MAIN_FILE) $(SOURCE_FILES_FOLDER)/*.cpp
	mkdir -p /$(BIN_FOLDER)
	g++ $(MAIN_FILE) $(SOURCE_FILES_FOLDER)/*.cpp -o $(TARGET)

# Cleaning binaries
clean:
	rm -rf $(BIN_FOLDER)

# Run targets
run: $(TARGET)
	./$(TARGET)
