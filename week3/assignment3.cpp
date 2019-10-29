#include <iostream>

int main() {
	char target[] = "Hwang GyuJin";
	long b[452];
	int a = 17;
	int i = 3652;
	int *c = new int[402];
	char * copy = "is no no";
	char name = 'a';

	std::cout << sizeof(target) << std::endl;
        std::cout << sizeof(b) << std::endl;
        std::cout << sizeof(a) << std::endl;
        std::cout << sizeof(i) << std::endl;
        std::cout << sizeof(c) << std::endl;
        std::cout << sizeof(copy) << std::endl;

	std::cout << &name+i << std::endl;
}
