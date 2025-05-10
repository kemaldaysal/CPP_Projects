#include <iostream>
using namespace std;

/* * C++ gibi diller kodları yukarıdan aşağıya doğru okurlar
 * ve bu yüzden örneğin selamla fonksiyonu, main fonksiyonunun
 * altındaysa, selamla'yı main içerisinde normalde çağıramaz.
   Bunu düzeltmek ve fonksiyonun aşağılarda tanımlandığını,
   sistemin onu bulması gerektiğini söylemek için fonksiyon
   prototipi olarak tanımlarız.
*/

void selamla(); // FUNCTION PROTOTYPE

int main() {

	selamla(); // Function call

	return 0;
}

void selamla() // Fonksiyon input alacaksa, parantez içine inputlar yazılır.
{
	cout << "Naber" << endl;
	cout << "Nasılsın?" << endl;
}
