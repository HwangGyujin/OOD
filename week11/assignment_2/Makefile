.SUFFIXES: .cpp .o

OBJECTS = Integer.o Float.o Complex.o test.o

CXX = g++
CPPFLAGS = -c

TARGET = test

$(TARGET) : $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)
clean :
	rm -rf $(OBJECTS) $(TARGET)

