#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "������������ ���� ���ϴ� ���α׷�" << endl;
	cout << "a�� �Է��Ͻÿ�" << endl;
	cin >> a;
	cout << "b�� �Է��Ͻÿ�" << endl;
	cin >> b;
	cout << "c�� �Է��Ͻÿ�" << endl;
	cin >> c;

	int d = 0;
	int x = 0;
	int y = 0;

	if (d > 0)
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
		cout << "���� �����ϴ�" << endl;


	return 0;
}