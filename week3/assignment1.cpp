#include <iostream>
#define rodata 123

int bss;
int data = 1;

int main(void) {

	int stack = 1;
	int* heap = new int[2];
	std::cout << "code\t" << (void*) &main << std::endl;
	std::cout << "Rodata\t" << (void*) rodata << std::endl;
	std::cout << "data\t" << &data << std::endl;
	std::cout << "BSS\t" << &bss << std::endl;
	std::cout << "HEAP\t" << heap << std::endl;
	std::cout << "Stack\t" << &stack << std::endl;
}
