#include <iostream>
using namespace std;

int main() {

	string parola = "123456";
	string input;

	// While'dan farkı, koşul doğru olmasa bile ilk seferde çalışır,
	// 2. seferde koşulu kontrol eder.

	do {

		cout << "Parolanızı girin: ";
		cin >> input;

		if (input != parola)
		{
			cout << "Parolayı yanlış girdiniz, tekrar deneyiniz." << endl;
		}


	}while (input != parola);

	cout << "Parolanız doğru, hoşgeldiniz." << endl;

	return 0;
}
