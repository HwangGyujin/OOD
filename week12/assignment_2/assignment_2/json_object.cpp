#include "json_object.h"
#include "json_dict.h"
#include "json_list.h"
#include "data/Integer.h"
#include "data/String.h"

int json_object::_index = 0;


json_object* json_object::parse(const std::string& str) {
	return parse(str.c_str(), str.length());
}

json json_object* parse(char* str, int length) {
	json_object* temp = NULL;
	while(_index < length) {
		switch(str[_index]) {
			case '{':
				temp = json_dict::parse(str, length);
				_index++;
				break;
			case '[':
				temp = json_list::parse(str, length);
				_index++;
				break;
			case '\'':
				temp = String::parse(str, length, '\'');
				_index++;
				break;
			case '\"':
				temp = String::parse(str, length, '\"');
				_index++;
				break;
			default:
				if(str[_index] >= 48 && str[_index] <= 57) {
					temp = Integer::parse(str, length);
				}
		}
		_index++;
	}
}
