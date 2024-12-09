CXX = g++
CXXFLAGS = -std=c++11 -Wall -pthread

GTEST_LIB = -lgtest -lgtest_main

MAIN_SOURCES = main.cpp Bumblebee.cpp Prime.cpp Liege_maximo.cpp Item.cpp Song.cpp Transformer.cpp

MAIN_OBJECTS = main.o Bumblebee.o Prime.o Liege_maximo.o Item.o Song.o Transformer.o

TEST_SOURCES = google_test.cpp Bumblebee.cpp Prime.cpp Liege_maximo.cpp Item.cpp Song.cpp Transformer.cpp

TEST_OBJECTS = google_test.o Bumblebee.o Prime.o Liege_maximo.o Item.o Song.o Transformer.o

EXECUTABLE = main_program
TEST_EXECUTABLE = test

all: $(EXECUTABLE) test

$(EXECUTABLE): $(MAIN_OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(MAIN_OBJECTS)

test: $(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(TEST_OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(TEST_OBJECTS) $(GTEST_LIB)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

google_test.o: google_test.cpp
	$(CXX) $(CXXFLAGS) -c google_test.cpp -o google_test.o

Bumblebee.o: Bumblebee.cpp
	$(CXX) $(CXXFLAGS) -c Bumblebee.cpp -o Bumblebee.o

Prime.o: Prime.cpp
	$(CXX) $(CXXFLAGS) -c Prime.cpp -o Prime.o

Liege_maximo.o: Liege_maximo.cpp
	$(CXX) $(CXXFLAGS) -c Liege_maximo.cpp -o Liege_maximo.o

Item.o: Item.cpp
	$(CXX) $(CXXFLAGS) -c Item.cpp -o Item.o

Song.o: Song.cpp
	$(CXX) $(CXXFLAGS) -c Song.cpp -o Song.o

Transformer.o: Transformer.cpp
	$(CXX) $(CXXFLAGS) -c Transformer.cpp -o Transformer.o

clean:
	rm -f $(MAIN_OBJECTS) $(TEST_OBJECTS) $(EXECUTABLE) $(TEST_EXECUTABLE)