#pragma once

#include <iostream>
#include "big_block.h"

class fold_block : public big_block {
private:
	block *a, *b, *c;
public:
	fold_block(int c1, int c2, int c3);
	block* get_a();
	block* get_b();
	block* get_c();
//	void rotate();
};