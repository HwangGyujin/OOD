#pragma once

#include <iostream>
#include "big_block.h"

class cross_block : public big_block {
private:
	block* a, *b, *c, *d, *e;
public:
	cross_block(int c1, int c2, int c3, int c4, int c5);
	block* get_a();
	block* get_b();
	block* get_c();
	block* get_d();
	block* get_e();
//	void rotate();
};