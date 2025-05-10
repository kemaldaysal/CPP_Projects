#include <iostream>
using namespace std;

// Detaylı bilgi için: https://youtu.be/jHPyWoSwE2w?list=PLIHume2cwmHfmSmNlxXw1j9ZAKzYyiQAq

int main() {

	int a = 5;

	int *ptr = &a;

	cout << "Degiskenin adresi: " << &a << endl;
	cout << "Degiskenin adresi: " << ptr << endl;

	cout << "Degiskenin degeri: " << *ptr << endl;

	*ptr = 6; // Pointerın değerini 5'ten 6'ya değiştirdik.

	cout << "Degiskenin yeni degeri: " << *ptr << endl;
	cout << "Degiskenin yeni adresi: (Degismedi) :" << ptr << endl;
 

	return 0;
}
