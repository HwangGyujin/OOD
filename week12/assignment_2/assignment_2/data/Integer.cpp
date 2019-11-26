#include "Integer.h"



Integer::Integer(int value) {
	this->_val = value;
}

int Integer::val() {
	return this->_val;
}
void Integer::set_val(const int& value) {
	this->_val = value;
}
static json_object* parse(const char* str, int length) {
	int& index = json_object::_index;
	std::string temp = "";
	while(index < length) {
		if(str[index] >= 48 && str[index] <= 57) {
			temp = temp + str[index];
		}
		else {
			return new Integer(atoi(temp.c_str()));
		}
		index++;
	}
}
json_object::_type Integer::type() {
	return json_object::INT;
}
std::string Integer::to_string() {
	return std::to_string(_val);
}
