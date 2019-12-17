#include "block.h"

block::block(int color) {
	this->color = color;
}
int block::get_color() {
	return this->color;
}
int block::get_x() {
	return this->x;
}
int block::get_y() {
	return this->y;
}
void block::set_location(int x, int y) {
	this->x = x;
	this->y = y;
}

bool block::can_left() {
	if (this->x == 0)
		return false;
	return true;
}
bool block::can_right() {
	if (this->x == 4)
		return false;
	return true;
}
bool block::can_down() {
	if (this->y > 11) {
		return false;
	}
//	else if () {
//
//	}
}

void block::right() {
	if(can_right())
		this->x++;
}
void block::left() {
	if(can_left())
		this->x--;
}
void block::down() {
	if (can_down())
		this->y = this->y + 1;
}
void block::down_all() {

}
