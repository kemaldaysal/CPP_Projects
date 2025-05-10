#include <iostream>
using namespace std;

int main() {

	int *ptr;

	int size;

	cout << "Kac deger saklayacaksiniz?: ";
	cin >> size;

	ptr = new int[size];

	for (int i = 1; i <= size; i++)
	{
		cout << i << ". degeri girin: ";
		cin >> ptr[i];
	}

	for (int i = 1; i <= size; i++)
	{
		cout << i << ". eleman: " << ptr[i] << endl;
	}

	delete [] ptr; // Birden fazla değer sakladığından başına [] bıraktık.

	return 0;
}
