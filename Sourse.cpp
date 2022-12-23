#include "String.h"
#include <iostream>
#include <string>


int main() {

	String s1;
	String s2("Car", 5);


	std::cout << (s1 == s2) << std::endl;
	return 0;
}