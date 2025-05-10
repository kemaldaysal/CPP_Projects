#include <iostream>
using namespace std;

int main() {

	const int i = 32; // i const oldugu icin sonraki satirlarda degistirilemez. 32 kalir.

	cout << "i's first value after const declaration: " << i << endl;

//	i = 40; // the compiler gave an error and didn't proceed to run. It said assignment of read-only variable.

	cout << "i's second value after changing it: " << i << endl;

	const int a[] = {10,20,30,40,50};

	// a[2] = 100; // değiştirmememiz gerektiğini belirten hata verdi.

	return 0;
}


/* const ile tanımlanan değişkenin değeri veya dizinin elemanı
 * DAHA SONRA DEĞİŞTİRİLEMEZ!
 *
 *
 */
