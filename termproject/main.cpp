#pragma once
#include "array_2d.h"
#include "block.h"
#include "fold_block.h"
#include "cross_block.h"
#include "tree_block.h"
#include <iostream>
#include "getch.h"
#include <ctime>

int main() {
	srand((unsigned int)time(0));
	array_2d *map = new array_2d();
	big_block* bb = new big_block();
	int type = (rand() % 3 + 1);
	std::cout << "score : " << map->get_score() << endl;
	while (map->can_make(type)) {
		if (type == 1) {
			int c1 = rand() % 3 + 1;
			int c2 = rand() % 3 + 1;
			int c3 = rand() % 3 + 1;
			fold_block* temp1 = new fold_block(c1, c2, c3);
			big_block* temp2 = new big_block(temp1->get_a(), temp1->get_b(), temp1->get_c());
			bb = temp2;
			

		}
		if (type == 2) {
			int c1 = rand() % 3 + 1;
			int c2 = rand() % 3 + 1;
			int c3 = rand() % 3 + 1;
			int c4 = rand() % 3 + 1;
			int c5 = rand() % 3 + 1;
			cross_block* temp1 = new cross_block(c1, c2, c3, c4, c5);
			big_block* temp2 = new big_block(temp1->get_a(), temp1->get_b(), temp1->get_c(), temp1->get_d(), temp1->get_e());
			bb = temp2;
		}
		if (type == 3) {
			int c1 = rand() % 3 + 1;
			int c2 = rand() % 3 + 1;
			int c3 = rand() % 3 + 1;
			tree_block* temp1 = new tree_block(c1, c2, c3);
			big_block* temp2 = new big_block(temp1->get_a(), temp1->get_b(), temp1->get_c());
			bb = temp2;
		}
		std::cout << bb->get_vector().size() << endl;
		map->insert(bb->get_vector());
		map->print();
		do {
			std::cout << "----------------------" << endl;
			
			map->print();
			map->remove(bb->get_vector());
			char temp = getch();
			std::cout << temp << endl;
			bb->move(temp);
			
			map->insert(bb->get_vector());
			map->print();
			if (map->get_blockcolor(bb->get_a_x(), bb->get_max_y() + 1) != 0)
				break;
			if (bb->can_down() == false)
				break;
			
			
		} while (true);
		std::cout << "finished" << std::endl;

	}
	return 0;
}
