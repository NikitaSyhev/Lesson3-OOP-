//���� ������ ������ � ������� ������������� �������
#include <iostream>
#include <string>
#include "Header.h"

//������� ������� ����� � �������������
// ������� ����� ��������������
// ������� ����� string


int main() {
	setlocale(LC_ALL, "Russian");
	

	Person p1("Alex");
	Person p2("John");

	std::cout << p1.getName() << '\n';
	std::cout << p2.getName() << '\n';
	//Person p3 = p1.operator+ (p2) - �������� + ( �� ������ ������������ ) 
	Person p3 = p1 + p2;


	std::cout << "=======================" << std::endl;
	std::cout << p3.getName() << '\n';

	std::cout << "������ �� �1 ��� �2?" << (p1 > p2) << std::endl;



















	return 0;
}