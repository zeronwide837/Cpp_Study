#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char str1[] = "ABC 121";
	char str2[] = "DEF 687";
	char str3[30];

	cout << "str1�� ���̴�" << strlen(str1) << "�̴�." << endl;
	cout << "str2�� ���̴�" << strlen(str2) << "�̴�." << endl;

	strcpy(str3, str1);
	cout << "str3��" << str3 << "�̴�." << endl;

	strcat(str3, str2);
	cout << "str3��" << str3 << "�̴�." << endl;

	if (strcmp(str1, str2) == 0)
		cout << "str1�� str2�� ����." << endl;
	else
		cout << "str1�� str2�� �ٸ���." << endl;

	return 0;
}