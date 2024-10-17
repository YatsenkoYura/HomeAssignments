CXX = g++
TARGET = assig2b

$(TARGET): main.o StackClass.o
	g++ main.o StackClass.o -o $(TARGET)

main.o: main.cpp
	g++ -c main.cpp

StackClass.o: StackClass.cpp
	g++ -c StackClass.cpp

clean:
	rm -rf *.o $(TARGET)
