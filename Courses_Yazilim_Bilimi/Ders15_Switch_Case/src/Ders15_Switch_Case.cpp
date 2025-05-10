#include <iostream>
using namespace std;

int main() {

	int islem;

	cout << "Islemi giriniz, secenekler: 1, 2, 3, 4: ";
	cin >> islem;

	cout << "Islem: " << islem << endl;

	switch(islem)
	{
		case 1:
			cout << "1. islemi sectiniz." << endl;
			break;

		case 2:
			cout << "2. islemi sectiniz." << endl;
			break;

		case 3:
			cout << "3. islemi sectiniz." << endl;
			break;

		case 4:
			cout << "4. islemi sectiniz." << endl;
			break;

		default:
			cout << "Gecersiz giris" << endl;
			break;

	}
// * her bir case'e break konulmazsa, break gördüğü ilk case'e kadar
// tüm caseleri çalıştırır ve hatalı çalışır.
	return 0;
}
