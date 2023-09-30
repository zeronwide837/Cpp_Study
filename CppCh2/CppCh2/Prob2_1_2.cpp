#include <iostream>
using namespace std;

void SwapPointer(int *(& vari1), int *(& vari2))
{
	int* tmp = vari1;
	vari1 = vari2;
	vari2 = tmp;
}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	cout << "�ʱⰪ1 : " << * ptr1 << endl;
	cout << "�ʱⰪ2 : " << * ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << "��ȯ��1 : " << * ptr1 << endl;
	cout << "��ȯ��2 : " << * ptr2 << endl;
	return 0;
}