#include <iostream>
using namespace std;

float toplama(float a, float b, float c)
{
	return a + b + c;
	cout << "Deneme" << endl; // return, break gibi davrandığından bu yazı yazdırılamaz.
}

int main() {

	float sonuc = toplama(1,2,3.5);

	cout << "Sonuc: " << sonuc << endl;

	return 0;
}


// toplama fonksiyonundaki toplam sonucunun çıktısını, başka bir fonksiyonda
// kullanmak istediğimizden return kullandık. Sadece çıktısını cout ile yazdırsaydık
// returne ihtiyaç yoktu ancak bir fonksiyonun çıktısını başka fonksiyonda
// girdi olarak kullanabilmek için buradaki gibi return kullanmalıyız.
// !! return, fonksiyonda break gibidir. returnün altına
// yazılan hiçbir komut çalışmaz. O komuta geçilmeden fonksiyondan çıkılır.
