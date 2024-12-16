CC=g++

CXXFLAGS=-std=c++17 -Wall -I. -I/usr/include/gtest -pthread
LDFLAGS=-lgtest -lgtest_main -pthread

TEST_SOURCES=google_test.cpp
TEST_EXECUTABLE=tests

HEADERS=Class1.hpp Class2.hpp Class3.hpp myTemplateClass.hpp myTemplateClass.tpp

all: $(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(TEST_SOURCES) $(HEADERS)
	$(CC) $(CXXFLAGS) $(TEST_SOURCES) $(LDFLAGS) -o $@
clean:
	rm -rf $(TEST_EXECUTABLE) *.o