#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "이차방정식의 근을 구하는 프로그램" << endl;
	cout << "a를 입력하시오" << endl;
	cin >> a;
	cout << "b를 입력하시오" << endl;
	cin >> b;
	cout << "c를 입력하시오" << endl;
	cin >> c;

	int d = 0;
	int x = 0;
	int y = 0;

	if (d > 0)
	{
		x = (-b - sqrt(b * b - 4 * a * c))/2 * a;
		y = (-b + sqrt(b * b - 4 * a * c))/2 * a;

		cout << "이차방정식의 근은" << x << " 와 " << y << "입니다" << endl;

	}
	else if (d == 0)
	{
		x = b / (-2 * a);
		cout << "이차방정식의 근은" << x << "입니다" << endl;
	}
	else
		cout << "근이 없습니다" << endl;


	return 0;
}