CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Списки исходных и объектных файлов
SOURCES = main.cpp Transformer.cpp Item.cpp Song.cpp
OBJECTS = $(SOURCES:.cpp=.o)  # объектные файлы соответствуют исходным файлам

# Название конечного исполняемого файла
EXECUTABLE = transformer_app

# Правило, описывающее сборку исполняемого файла
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Правило для компиляции .cpp в .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка промежуточных и конечных файлов
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

# .PHONY указывает, что "clean" - это не файл, а цель
.PHONY: clean