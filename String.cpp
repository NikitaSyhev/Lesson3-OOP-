#include "String.h"
#include <string>


String::String(const std::string& obj) : _obj("Car"), _size(3) {}

const std::string& String::getObj() const {
	return _obj;
}

void String::setObj(const std::string& obj) {
	_obj = obj;
}



bool operator == (String& other) {// ïåðåãðóçêà îïåðàòîðà ñðàâíåíèÿ
	if (std::string _obj == other. &&
		color == other.color &&
		type == other.type) {
		return true;
	}
	return false;
}