#include <iostream>
using namespace std;

void degerDegistir(int &ref)
{
	ref = 20;
}


int main() {

	int a = 10;
	int &ref = a; // &, burada adresi simgelemez, bu degiskenin
// bir referans oldugunu belirtir.
	ref++;
	
	cout << "ref: " << ref << endl;
	cout << "a: " << a << endl;

	degerDegistir(a);

	cout << "new a: " << a << endl;
	cout << "new ref: " << ref << endl;

	return 0;
}

/*  Reference'larda a'nÄ±n kendi degerini fonksiyona atarken,
 *pointerlarda a'nin adres degerini atamak zorundaydik
 *  Reference'larin kullanim± ve okunmasi pointerlara gore daha kolay
 *  ve daha guvenilirdir.
 *
 */
