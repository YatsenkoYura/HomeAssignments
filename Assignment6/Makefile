# Компилятор и опции
CC=g++
CXXFLAGS=-std=c++17 -Wall -I. -I/usr/include/gtest -pthread
LDFLAGS=-lgtest -lgtest_main -pthread

# Тестовый код
TEST_SOURCES=google_test.cpp
TEST_EXECUTABLE=tests

# Заголовочные файлы
HEADERS=Class1.hpp Class2.hpp Class3.hpp myTemplateClass.hpp myTemplateClass.tpp

# Цель по умолчанию
all: $(TEST_EXECUTABLE)

# Сборка тестового исполняемого файла
$(TEST_EXECUTABLE): $(TEST_SOURCES) $(HEADERS)
	$(CC) $(CXXFLAGS) $(TEST_SOURCES) $(LDFLAGS) -o $@

# Очистка временных файлов
clean:
	rm -rf $(TEST_EXECUTABLE)