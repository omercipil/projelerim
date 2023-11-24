#include <iostream>
using namespace std;
int main()
{
	int x, y;
	char islem;

	cout << "1. sayiyi giriniz:";
	cin >> x;

	cout << "2. sayiyi giriniz:";
		cin >> y;

	cout << "islemi seciniz:";
	cin >> islem;

	switch (islem)
	{
	case '+':
		cout << x + y;
		break;

	case '-':
		cout << x - y;
		break;

	case '*':
		cout << x * y;
		break;

	case '/':
		cout << x / y;
		break;
	}
}