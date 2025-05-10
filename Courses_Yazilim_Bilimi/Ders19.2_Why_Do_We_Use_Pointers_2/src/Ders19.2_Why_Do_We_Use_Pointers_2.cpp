#include <iostream>
using namespace std;

void degerDegistir(int *ptr)
{
	*ptr = 20;
	cout << "Fonksiyon içindeki değer: " << *ptr << endl;
}

int main() {

	int a = 10;
	cout << "a değişkeninin başlangıç değeri: " << a << endl;
	degerDegistir(&a);
	cout << "Fonksiyondan sonra a değişkeninin yeni değeri: " << a << endl;

return 0;
}
