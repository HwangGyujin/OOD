.SUFFIXES: .cpp .o

OBJECTS = main.o array_2d.o big_block.o block.o cross_block.o fold_block.o tree_block.o

CXX = g++
CPPFLAGS = -c

TARGET = test

$(TARGET) : $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)

clean :
	rm -rf $(OBJECTS) $(TARGET)

main.o : main.cpp
array_2d.o : array_2d.cpp
big_block.o : big_block.cpp
block.o : block.cpp
cross_block.o : cross_block.cpp
fold_block.o : fold_block.cpp
tree_block.o : tree_block.cpp
