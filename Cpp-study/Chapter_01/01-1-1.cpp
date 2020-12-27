#include <iostream>

int main(void) {
	int input;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "번째 정수 입력: ";
		std::cin >> input;
		sum += input;
	}

	std::cout << "합계: " << sum << std::endl;

	return 0;
}