#include <iostream>
#include <string>
using namespace std;
int main()
 {
    cout << "ZIRAAT BANKASI\n";
	cout << "LUTFEN YAPMAK ISTEDIGINIZ\n";
	cout << "ISLEMI SECINIZ\n";
	cout << endl;

	cout << "1- PARA CEKME\n";

	cout << "2- PARA TRANSFERI" << "     " << "3- ODEME ISLEMLERI\n";

	cout << "4- BASVURU ISLEMLERI" << "  " << "5- KREDI KARTI BORC ODEME\n";

	cout << "6- BAKIYE BILGI" << "       " << "7- DIGER ISLEMLER\n";

	cout << endl;
	cout << endl;

	int x, bakiye = 985, islem;

	cin >> islem;

	switch (islem)
	{
	case 1:
		cout << "cekmek istediginiz tutari giriniz\n";
		cin >> x;

		if (x > bakiye)
			cout << "yetersiz bakiye\n";

		else
		{
			cout << "paraniz hazirlaniyor lutfen bekleyiniz\n";
			cout << " kalan bakiyeniz:" << " " << 985 - x << "TL";
		}
		break;

	case 2:
		cout << "lutfen alicinin bilgilerini giriniz\n";
		long long iban;
			int y;
			

		cout << "ibani giriniz:";
		cin >> iban;

		cout << endl;

		cout << "isimi giriniz:";
		string isim;
		cin.ignore();
		getline(cin, isim) ;


		cout << "lutfen gondermek istediginiz tutari giriniz:";
		cin >> y;

		if (y > bakiye)
			cout << "yetersiz bakiye";

		else
		{
			cout << "yeni bakiyeniz:" << bakiye - y;
		}
		break;

	case 3:
		cout << "uzgunuz suanda atm miz bu islemi gerceklestiremiyor ";
		cout << endl;
		break;

	case 4:
		cout << "uzgunuz suanda atm miz bu islemi gerceklestiremiyor ";
		cout << endl;
		break;

	case 5:
		int z;
		cout << "kredi karti borcunuz 55 tl'dir";

		cout << endl;

		cout << "lutfen yapmak istediginiz odeme miktarini giriniz:";
		cin >> z;

		cout << "kalan borcunuz:" << 55 - z << "TL";

		cout << endl;

		cout << "yeni baiyeniz:" << bakiye - z;
		break;

	case 6:

		cout << "bakiyeniz:" << bakiye << "TL";

		break;

	case 7:
		cout << "baska bir islem bulunmamaktadir";
		break;
	}
}


