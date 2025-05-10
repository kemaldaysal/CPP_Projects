#include <iostream>
using namespace std;

void selamla()
{
	cout << "Merhaba" << endl;
}

void selamla(string name)
{
	cout << "Merhaba " << name << endl;
}

void selamla(string name1,string name2)
{
	cout << "Merhaba " << name1 << " ve " << name2 << endl;
}


int main() {

	selamla();

	selamla("Mustafa"); // Bu fonksiyon şuanki haliyle
// böyle kullanılamaz ancak böyle kullanabilmek için fonksiyona
// aşırı yükleme yapmamız gerekir.
// Aşırı yükleme: fonksiyon adının aynı kalması ancak parametrelerinin
// değişmesi.

	selamla("Kemal", "Oguz");

// Aynı fonksiyon, farklı parametrelerle farklı kullanımlara
// ve girişlere uygun olarak tanımlandı.

//	selamla("Kemal", "Oguz","Hasan"); // 3 input tanimlanmadigi icin hata verecektir



	return 0;
}
