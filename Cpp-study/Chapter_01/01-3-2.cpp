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
	// ���� ���� ���� ��ܿ� �ִ� �Լ��� ȣ�������

	// std::cout << "SimpleFunc()" << SimpleFunc() << std::endl;
	// ���ڸ� �־����� ���� ���, �� �Լ��� ȣ�� ������ ��� �����ϹǷ� ������ ���� �߻�

	return 0;
}