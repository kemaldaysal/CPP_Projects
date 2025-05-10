#include <iostream>
using namespace std;

int main() {

	int sayi1 = 10;
	int sayi2 = 4;

	cout << "1. sayi + 2. sayi = " << sayi1 + sayi2 << endl;
	cout << "1. sayi - 2. sayi = " << sayi1 - sayi2 << endl;
	cout << "1. sayi * 2. sayi = " << sayi1 * sayi2 << endl;
	cout << "1. sayi / 2. sayi = " << float(sayi1) / sayi2 << endl;
//  cout << "1. sayi / 2. sayi = " << sayi1 / float(sayi2) << endl;
	cout << "1. sayi % 2. sayi = " << sayi1 % sayi2 << endl;


	int a = 5;
	cout << "A'nın değeri: " << a << endl;
	a = a + 2;
	cout << "A'nın yeni değeri: " << a << endl;
	a *= 2;
	cout << "A'nın yeni değeri: " << a << endl;
	a++;
	cout << "A'nın yeni değeri: " << a << endl;
	a--;
	cout << "A'nın yeni değeri: " << a << endl;




	return 0;
}
