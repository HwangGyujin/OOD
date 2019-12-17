#include "array_2d.h"
block* zeroblock = new block(0);
array_2d::array_2d() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 5; j++) {
			this->block_array[j][i] = new block(0);
		}
	}
	this->score = 0;
}
void array_2d::print() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << this->block_array[j][i]->get_color();
			std::cout << "   ";
		}
		std::cout << "" << endl;
	}
}
bool array_2d::can_make(int type) {
	switch (type) {
	case 1: //fold
		if (this->block_array[2][0]->get_color() == 0 &&
			this->block_array[2][1]->get_color() == 0 &&
			this->block_array[1][1]->get_color() == 0) {
			return true;
		}
		else {
			return false;
		}
		
		break;
	case 2: //tree
		if (this->block_array[2][0]->get_color() == 0 &&
			this->block_array[2][1]->get_color() == 0 &&
			this->block_array[2][2]->get_color() == 0) {
			return true;
		}
		else {
			return false;
		}
		
		break;
	case 3: //cross
		if (this->block_array[2][0]->get_color() == 0 &&
			this->block_array[2][1]->get_color() == 0 &&
			this->block_array[1][1]->get_color() == 0 &&
			this->block_array[3][1]->get_color() == 0 &&
			this->block_array[2][2]->get_color() == 0)
		{
			return true;
		}
		else {
			return false;
		}
	
		break;
	default:
		return false;
	}
	
}
int array_2d::get_score() {
	return this->score;
}
block *array_2d::get_block(int x, int y) {
	return this->block_array[x][y];
}

void array_2d::insert(vector<block *> v) {
	for (int i = 0; i < v.size(); i++) {
		this->block_array[v[i]->get_x()][v[i]->get_y()] = v[i];
	}
}
void array_2d::remove(vector<block *> v) {
	for (int i = 0; i < v.size(); i++) {
		this->block_array[v[i]->get_x()][v[i]->get_y()] = zeroblock;
	}
}
void array_2d::insert(int x, int y, block * b) {
	this->block_array[x][y] = b;
}
int array_2d::get_blockcolor(int x, int y) {
	return this->block_array[x][y]->get_color();
}

void array_2d::delete_block(int x, int y) {

}
