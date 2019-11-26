#include "String.h"

String::String(const std::string& str) {
	this->_val = str;
}

std::string val() {
	return this->_val;
}
void set_val(const std::string& str) {
	this->_val = str;
}

_type type() {
	return json_object::STRING;
}
std::string to_string() {
	return '\'' + this->_val + '\'';
}

static json_object* parse(const char* cha, int length, char base) 
	int& index = json_object::_index;
	std::string temp = "";
	while(index < length) {
		if(str[index] == base) {
			return new String(temp);
		}
		else {
			temp = temp + str[index];
		}
		index++;
	}
}

}
