#pragma once
#include <iostream>
#include <vector>
#include "array_2d.h"
#include "block.h"
#include <algorithm>
using namespace std;
class big_block {
private:
	vector<block *> v;
	int min_x, min_y, max_x, max_y, a_x;
public:
	big_block();
	big_block(block* a, block* b, block* c);
	big_block(block* a, block* b, block* c, block* d, block* e);
	~big_block();
//	void rotate();
	bool can_left();
	bool can_right();
	bool can_down();
	void left();
	void right();
	void down();
//	bool down_all();
	bool move(char input);
	vector<block *> get_vector();
	int get_max_y();
	int get_a_x();
};