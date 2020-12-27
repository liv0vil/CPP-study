#include <iostream>

int main(void) 
{
	int num;
	std::cout << "구구단 정보 입력: ";
	std::cin >> num;

	for (int i = 0; i < 9; i++) 
		std::cout << num << " X " << i + 1 << " = " << num * (i + 1) << std::endl;
	
	return 0;
}