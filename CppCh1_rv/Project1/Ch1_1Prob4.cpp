#include <iostream>

int salary(int sale)
{
	return (int)(50 + sale * 0.12);
}

int main(void)
{
	int sale;
	while (1) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sale;
		if (sale == -1)
			break;
		std::cout << "�̹� �� �޿�: ";
		std::cout << salary(sale) << "����" << std::endl;
	}
	std::cout << "���α׷��� �����մϴ�." << std::endl;
	return 0;
}