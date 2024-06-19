# Исходные файлы
MAIN_FILE := main.cpp
SOURCE_FILES_FOLDER := game/source_files
BIN_FOLDER := bins
TARGET := $(BIN_FOLDER)/test_compilation

# Цель по умолчанию
all: $(TARGET)

# Создание бинарного каталога и компиляция проекта
$(TARGET): $(MAIN_FILE) $(SOURCE_FILES_FOLDER)/*.cpp
	mkdir -p $(BIN_FOLDER)
	g++ $(MAIN_FILE) $(SOURCE_FILES_FOLDER)/*.cpp -o $(TARGET)

# Очистка
clean:
	rm -rf $(BIN_FOLDER)

# Запуск
run: $(TARGET)
	./$(TARGET)
