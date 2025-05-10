#include <iostream>
using namespace std;

// https://youtu.be/QEqyyXMgKXE?list=PLIHume2cwmHfmSmNlxXw1j9ZAKzYyiQAq

int main() {

	int *ptr1 = nullptr;

	int *ptr2 = nullptr;

	ptr1 = new int;
	
	cout << "ptr1 (after init) value: " << *ptr1 << ", with an address of: " << ptr1 << endl;

	*ptr1 = 10;
	
	cout << "ptr1 (after giving value of 10) value: " << *ptr1 << ", with an address of: " << ptr1 << endl;

	ptr2 = ptr1; // ptr1 ve ptr2 aynı adresi gösteriyor
	
	cout << "ptr2 (after ptr2 = ptr1) value: " << *ptr2 << ", with an address of: " << ptr2 << endl;

	delete ptr1; // Artık ptr1 ve ptr2 geçersiz olan yeri gösterecek. dangling reference olacaklar

	*ptr2 = 20;

	cout << "ptr2 (after giving it 20) value: " << *ptr2 << ", with an address of: " << ptr2 << endl;

	/*
	int *ptr = nullptr; // Herhangi bir yeri göstermeyen bir pointer tanımladık.

	ptr = new int;

	*ptr = 10;

	delete ptr;

	*ptr = 10;

	cout << *ptr << endl;
	*/


	return 0;
}
