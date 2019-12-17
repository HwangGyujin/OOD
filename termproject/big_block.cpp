#include "big_block.h"

big_block::big_block() {

}
big_block::big_block(block* a, block* b, block* c) {
	this->v.push_back(a);
	this->v.push_back(b);
	this->v.push_back(c);
	max_x = c->get_x();
	max_y = c->get_y();
	min_x = c->get_x();
	min_y = a->get_y();
	a_x = a->get_x();
}
big_block::big_block(block* a, block* b, block* c, block* d, block* e) {
	this->v.push_back(a);
	this->v.push_back(b);
	this->v.push_back(c);
	this->v.push_back(d);
	this->v.push_back(e);
	max_x = d->get_x();
	max_y = e->get_y();
	min_x = b->get_x();
	min_y = a->get_y();
	a_x = a->get_x();
}
int big_block::get_max_y() {
	return this->max_y;
}
int big_block::get_a_x() {
	return this->a_x;
}

vector<block *> big_block::get_vector() {
	return this->v;
}

big_block::~big_block() {
}

bool big_block::can_left() {
	if (this->min_x < 1)
		return false;
	return true;
}
bool big_block::can_right() {
	if (this->max_x > 3)
		return false;
	return true;
}
bool big_block::can_down() {
	if (this->max_y > 10)
		return false;
	
	return true;
}
void big_block::left() {
	for (int i = 0; i < v.size(); i++) {
		if (can_left()) {
			v[i]->left();
		}
	}
	if(can_left())
		this->max_x--;
}
void big_block::right() {
	for (int i = 0; i < v.size(); i++) {
		if (can_right()) {
			v[i]->right();
		}
	}
	if(can_right())
		this->max_x++;
}
void big_block::down() {
	for (int i = 0; i < v.size(); i++) {
		if (can_down()) {
			v[i]->down();
		
		}
			
	}
	if(can_down())
		this->max_y++;
	
}

bool down_all();
bool big_block::move(char input) {
	switch (input) {
	case('a'):
		big_block::left();
		break;
	case('d'):
		big_block::right();
		break;
	case('s'):
		big_block::down();
		break;
	case('q'):
		exit(0);
		break;
	default:
		break;
	}
}
