  #include <iostream>
using namespace std;

void degerDegistir(int af)
{
	af = 20;
	cout << "Fonksiyon icindeki deger: " << af << endl;
}

int main() {

	int a = 10;

	cout << "a degiskeninin baslangic degeri: " << a << endl;
	degerDegistir(a);
	cout << "Fonksiyondan sonra a degiskeninin yeni degeri: " << a << endl;

	return 0;
}
