#pragma once

#include <iostream>
#include <set>
#include "block.h"
#include <vector>

using namespace std;
class array_2d {

private:
	block *block_array[5][12];
	int score;
public:
	array_2d();
	bool can_make(int type);
	void delete_block(int x, int y);
	void insert(vector<block *> v);
	void insert(int x, int y, block * b);
	void remove(vector<block *> v);
	block *get_block(int x, int y);
//	bool can_move(int x, int y);
	void print();
//	bool can_explosion();
//	void explosion();
	int get_score();
	int get_blockcolor(int x, int y);
	
};