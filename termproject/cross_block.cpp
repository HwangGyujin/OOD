#include "cross_block.h"
#include <iostream>

cross_block::cross_block(int c1, int c2, int c3, int c4, int c5) {
	this->a = new block(c1);
	this->b = new block(c2);
	this->c = new block(c3);
	this->d = new block(c4);
	this->e = new block(c5);
	a->set_location(2, 0);
	b->set_location(1, 1);
	c->set_location(2, 1);
	d->set_location(3, 1);
	e->set_location(2, 2);
}
block* cross_block::get_a() {
	return this->a;
}
block *cross_block::get_b() {
	return this->b;
}
block *cross_block::get_c() {
	return this->c;
}
block* cross_block::get_d() {
	return this->d;
}
block* cross_block::get_e() {
	return this->e;
}
