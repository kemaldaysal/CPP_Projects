#include <iostream>
using namespace std;

int main() {

	int array[3];

	array[0] = 10;
	array[1] = 20;
	array[2] = 30;

	cout << "0. index: " << array[0] << endl;
	cout << "1. index: " << array[1] << endl;
	cout << "2. index: " << array[2] << endl;

// **********************************************

	//"int array2[] = {10,20,30,40};

// **********************************************

	double array3[] = {1.2 , 3.5 , 4.6 , 7.6};

	for (int i = 0; i <= 3 ; i++)
	{
		cout << i << ". index degeri: " << array3[i] << endl;
	}

	cout << "Dizinin 4. indexi: " << array3[4] << endl;
// Dizinin son indexi 3 ve dizi 4 elemanlı olduğundan, 4. index yani 5. elemanı
// olmadığından, bu değeri sorguladığımızda rastgele bir değer verir.

// **********************************************
// Diziyi doldurmak için kullanıcıdan değer alma

	cout << endl;
	cout << "Diziyi doldurmak icin kullanicidan deger alma" << endl;

	string array4[4];

	for (int j=0 ; j<4 ; j++)
	{
		cout << "Lutfen " << j << ". inputu giriniz." << endl;
		cin >> array4[j];
	}

	for (int j=0 ; j<4 ; j++)
	{
		cout << "Dizinin " << j << ". degeri " << array4[j] <<" 'dir." << endl << endl;
	}

	return 0;
}
