#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "���������� �� ���ϱ�" << endl;
	

	float x1 = 0;
	float x2 = 0;

	cout << "a�� �Է��Ͻÿ�" << endl;
	cin >> a;
	cout << "b�� �Է��Ͻÿ�" << endl;
	cin >> b;
	cout << "c�� �Է��Ͻÿ�" << endl;
	cin >> c;

	x1 = (( - b) + (float)sqrt(b * b - 4 * a * c)) / 2 * a;
	x2 = (( - b) - (float)sqrt(b * b - 4 * a * c)) / 2 * a;

	cout << x1 << endl;
	cout << x2 << endl;

	int Number = 0;
	Number = (int)(2.1f);
	Number = static_cast<int>(2.1f);


	/*if (d > 0)
	{
		x = (-b - sqrt(b * b - 4 * a * c))/2 * a;
		y = (-b + sqrt(b * b - 4 * a * c))/2 * a;

		cout << "������������ ����" << x << " �� " << y << "�Դϴ�" << endl;

	}
	else if (d == 0)
	{
		x = b / (-2 * a);
		cout << "������������ ����" << x << "�Դϴ�" << endl;
	}
	else
		cout << "���� �����ϴ�" << endl;*/


	return 0;
}