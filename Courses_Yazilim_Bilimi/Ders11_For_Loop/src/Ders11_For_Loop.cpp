#include <iostream>
using namespace std;

int main() {

	//int i;

// C'den farklı olarak, i'nin önceden tanımlanmasına gerek yoktur. Döngüye
// özel olacak şekilde, döngü koşulu başlangıcında da tanımlanabilir.
// Ancak tanımlanan i, sadece for döngüsü içinde tanımlanmıştır ve
// sadece döngü içinde çalışır.

	for(int i = 1 ; i < 10 ; i = i+2 )

	{
		cout << "i: " << i << endl;
	}

	// ****** ÖRNEK 2 ******

	int sayi,faktoriyel_sonuc = 1;

	cout << "Sayi giriniz: ";
	cin >> sayi;
	
	while (!(sayi > 0)) {
		
	 cout << "Gecersiz sayi girdiniz, tekrar giriniz: ";
	 cin >> sayi;
		
	}
			
	for (int j = sayi; j >= 1; j--)
	{
		faktoriyel_sonuc = faktoriyel_sonuc * j;
	}

	cout << sayi << " sayisinin faktoriyeli: " << faktoriyel_sonuc << "'dir." << endl;
	return 0;
}
