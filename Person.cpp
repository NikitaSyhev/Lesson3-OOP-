#include "Header.h"
#include <string>

Person::Person() {
	_name = "DefaultName";    //_ делаем для private полей
	_id = -1;
}

Person::Person(const std::string& name) : _name(name), _id (-1) {}    //правильная инициализация


//возвращаемый тип, класс :: функция(), ключевые слова
const std::string& Person::getName() const {
	return _name;
}

void Person:: setName(const std::string& name) {
	_name = name;

}

void Person::setId(size_t id) {
	_id = id;

}

Person Person::operator+(const Person& other) {
	std::string resName = _name + other.getName();
	Person resPerson(resName);
	return resPerson;

}

