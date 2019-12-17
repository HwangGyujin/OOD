#include "tree_block.h"
#include <iostream>

tree_block::tree_block(int c1, int c2, int c3) {
	this->a = new block(c1);
	this->b = new block(c2);
	this->c = new block(c3);
	a->set_location(2, 0);
	b->set_location(2, 1);
	c->set_location(2, 2);


}
block* tree_block::get_a() {
	return this->a;
}
block* tree_block::get_b() {
	return this->b;
}
block* tree_block::get_c() {
	return this->c;
}