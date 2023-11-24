#include <iostream>
using namespace std;
int main()
{
	int x, sum = 1;
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		sum = sum * i;
	}

	cout << sum;


}


