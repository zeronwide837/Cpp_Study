#include <iostream>
using namespace std;

void Increase(int& num)
{
	int tmp = num;
	num = tmp + 1;
}

void Swapsign(int& num)
{
	int tmp = num;
	num = tmp * (-1);
}

int main(void)
{
	int num1;

	cout << "num1 �Է� : ";
	cin >> num1;
	

	Increase(num1);
	cout << "num1 + 1: " << num1 << endl;

	Swapsign(num1);
	cout << "(num1 + 1) * (-1) : " << num1 << endl;
	
}

/* ��� ���
void Increase(int& num)
{
	num += 1;
}

void Swapsign(int& num)
{
	num *= -1;
}*/

/*������ �̿��ϱ�
void Increase(int* num)
{
	int tmp = *num;
	*num = tmp + 1;
}

void Swapsign(int *num)
{
	int tmp = *num;
	*num = tmp * (-1);
}

int main(void)
{
	int num1;

	cout << "num1 �Է� : ";
	cin >> num1;


	Increase(&num1);
	cout << "num1 + 1: " << num1 << endl;

	Swapsign(&num1);
	cout << "(num1 + 1) * (-1) : " << num1 << endl;

}
*/