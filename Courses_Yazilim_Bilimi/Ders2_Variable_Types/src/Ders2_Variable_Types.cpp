#include <iostream>
using namespace std;

int main() {

	// Değişken Tipleri ve Değişkenler
	/*
	  int , float, double, char, bool

	 */

	int a = 32;
	float b = 3.52;
	double c = 4.546;
	char d = 'A'; // A'nın ASCII karşılığı 65 olduğundan char d = 65 de girilebilirdi.
	bool e = false;
	char f = 100;

	cout << "a değişkeninin değeri : " << a << endl;
	cout << "b değişkeninin değeri : " << b << endl;
	cout << "c değişkeninin değeri : " << c << endl;
	cout << "d değişkeninin değeri : " << d << endl;
	cout << "e değişkeninin değeri : " << e << endl;
	cout << "f değişkeninin değeri : " << f << endl;

	int a2,b2,c2,toplam = 0;

	a2 = 4;
	b2 = 3;
	c2 = 5;

	toplam = a2 + b2 + c2;

	cout << "Toplam : " << toplam << endl;



	return 0;
}
