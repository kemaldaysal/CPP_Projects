#include <iostream>
using namespace std;

// Detaylı bilgi: https://youtu.be/vEUxwnWiYV0?list=PLIHume2cwmHfmSmNlxXw1j9ZAKzYyiQAq

int main() {

	int array[] = {1,2,3,4};

	// array, dizinin sadece başlangıç adresini taşıyan değişkendir.
	// buradaki array, pointer değildir.
	
	cout << "Array's value: " << *array << " at this address: " << array << endl;

	// 1 integer = 4 bayt taşıdığından, dizinin başlangıç adresine 1 eklersek
	// yeni adres +4 ileri gider.
	// Aslında adres 1 artmaz, başlangıç değeri adresinden bir sonraki kutucuğun adresine gider. Örneğin
	// 1'in başlangıç adresi yerine 2'nin başlangıç adresine gider.
	
    cout << "Array's value: " << *(array+1) << " at this address: " << (array+1) << endl;


    cout << "Array's value: " << *(array+2) << " at this address: " << (array+2) << endl;
    cout << "Array's value: " << *(array+3) << " at this address: " << (array+3) << endl;
    cout << "Array's value: " << *(array+4) << " at this address: " << (array+4) << endl;
    cout << "Array's value: " << *(array+5) << " at this address: " << (array+5) << endl;




	cout << endl << "*****" << endl;

	int *ptr = array;

	cout << "*ptr of array: " << ptr << endl;
	cout << "*ptr+1 of array: : " << ptr+1 << endl;

	int *ptr2 = &array[2]; // 2. indexin adresini pointera ata.

	cout << "Value of ptr2: " << *ptr2 << " at this memory address (ptr2): " << ptr2 << endl;

	cout << endl << "---Yeni Ornek----" << endl;

	string array2[] = {"Mustafa","Murat","Coskun"};

	string *ptr3 = array2;
	
	cout << "Value at ptr3: " << *ptr3 << " at this address: " << ptr3 << endl;
	
	cout << "Value at ptr3 + 1: " << *(ptr3+1) << " at this address: " << (ptr3+1) << endl;
	cout << "Value at ptr3 + 2: " << *(ptr3+2) << " at this address: " << (ptr3+2) << endl;
	
	cout << "Value at ptr3[1]: " << (ptr3[1]) << endl;
	cout << "Value at array2[2]: " << (array2[2]) << endl;



// # Array'in sınırlarının dışındaki bir elementin pointerını bulmaya çalışırsak, ramdeki rastgele bir işlemin adresini verir.
// Bu adres önemli bir programa aitse ve değiştirmeye çalışırsak kritik sorunlarla karşılaşabiliriz.
	
	cout << "Value at ptr3 + 3: (A random value will be returned because the array isn't that big.)" << *(ptr3+3) << " at this address: " << (ptr3+3) << endl;
	
	return 0;
}


