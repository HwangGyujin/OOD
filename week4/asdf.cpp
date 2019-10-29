static const int gen = 983;
#include <iostream>

int recursive(int g) {
    if (g == 0) {
        return 1;
    }
    if (g == 1) {
        return 2;
    }
    return (recursive(g-1) + recursive(g-2)) % gen;
}

int main() {

	int a = recursive(6);
	std::cout << a << std::endl;
	return 0;

}
