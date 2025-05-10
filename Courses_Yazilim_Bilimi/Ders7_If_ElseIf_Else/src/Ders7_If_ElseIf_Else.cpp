#include <iostream>
using namespace std;

int main() {

	int secim,sonuc = 0;
	float a,b;

	cout << "Birinci sayıyı girin: ";
	cin >> a;
	cout << "İkinci sayıyı girin: ";
	cin >> b;


	cout << "1- Toplama" << endl;
	cout << "2- Çıkarma" << endl;
	cout << "3- Çarpma" << endl;
	cout << "4- Bölme" << endl;
	cout << "5- Mod Alma" << endl;
	cout << "Yukarıdaki işlemlerden birini seçin: ";

	cin >> secim;

	if (secim == 1)
		{
			sonuc = a + b;
		}

	else if (secim == 2)
		{
			sonuc = a - b;
		}

	else if (secim == 3)
		{
		    sonuc = a * b;
		}

	else if (secim == 4)
		{
	    	sonuc = a / b;
		}
/*
	else if (secim == 5)
		{
    	    sonuc = a % b;
		}
*/
	else
		{
			cout << "Hatalı giriş yaptınız. Lütfen uygulamayı tekrar başlatın ve 1-5 arasında bir seçim yapın." << endl;
		}

	cout << "Sonuç: " << sonuc << endl;

	return 0;
}
