#include <iostream>

int CalSalary(int sales) 
{
	return 50 + sales * 0.12;
}

int main(void) {
	int sales = 0;

	while (1) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sales;
		if (sales == -1)
			break;
		std::cout << "�̹��� �޿�: " << CalSalary(sales) << "����" << std::endl;
	}

	std::cout << "���α׷��� �����մϴ�\n";

	return 0;
}