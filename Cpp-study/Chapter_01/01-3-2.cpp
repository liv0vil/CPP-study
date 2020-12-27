#include <iostream>

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

int main(void) {
	std::cout << "SimpleFunc(int a = 10)" << SimpleFunc(5) << std::endl;
	// 위와 같이 쓰면 상단에 있는 함수가 호출되지만

	// std::cout << "SimpleFunc()" << SimpleFunc() << std::endl;
	// 인자를 넣어주지 않을 경우, 두 함수의 호출 조건을 모두 만족하므로 컴파일 에러 발생

	return 0;
}