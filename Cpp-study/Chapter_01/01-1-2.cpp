#include <iostream>

int main(void) 
{
	char name[50];
	char phone[50];

	std::cin >> name >> phone;
	std::cout << "이름: " << name << std::endl;
	std::cout << "전화번호: " << phone << std::endl;

	return 0;
}