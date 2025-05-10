#include <iostream>
using namespace std;

int main() {

	int *ptr = new int;

	*ptr = 5;

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;

	cout << ptr << endl;
	cout << *ptr << endl;

	return 0;
}

// Pointerla işimiz bittiğinde, bellekte yer işgal etmesin diye
// delete komutuyla pointerdaki 5'i sildik ve rastgele bir değer atandı.
// Böylece memory leak'in önüne geçtik
