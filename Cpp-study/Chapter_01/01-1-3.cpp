#include <iostream>

int main(void) 
{
	int num;
	std::cout << "������ ���� �Է�: ";
	std::cin >> num;

	for (int i = 0; i < 9; i++) 
		std::cout << num << " X " << i + 1 << " = " << num * (i + 1) << std::endl;
	
	return 0;
}