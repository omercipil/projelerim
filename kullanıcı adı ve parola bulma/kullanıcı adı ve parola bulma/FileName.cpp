#include <iostream>
#include <string>
using namespace std;
int main()
{

	string username = "omer cipil";
	string password = "123456";

	

	while (true)
	{
		string x;
		cout << "kullanici adini giriniz:";
		getline(cin, x);

		cout << "sifreyi giriniz:";
		string y;
		cin >> y;

		if (x == username && y == password)
		{
			cout << "hosgeldiniz;" << username;
			break;
		}

		else if (x != username && y == password)
			cout << "kullanici adi hatali";

		else if (x == username && y != password)
			cout << "sifre hatali";

		else
			cout << "kullanici adi ve  sifre hatali";
	
		cout << endl;
		cout << endl;
	}



}