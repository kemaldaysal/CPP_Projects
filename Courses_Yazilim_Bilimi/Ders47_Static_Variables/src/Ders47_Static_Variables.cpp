// Normalde, bir fonksiyon bittiğinde, fonksiyondaki
// değişkenler bellekten otomatik olarak silinir.
// Statik Değişken, program kapatılana kadar bellekte kalır,
// fonksiyon bitse de silinmez.


#include <iostream>
using namespace std;

void Test()
{
	int i = 3;
	i++;
	cout << "i'nin degeri: " << i << endl;
}

void Test2()
{
	static int j = 3; // Fonksiyon 2. defa çağırıldığında int i = 3 tekrar oluşmaz. i zaten önceki döngüden 4'tü ve burada da 4 üzerinden devam eder, 5 olur ve sonrakinde de 6 olur. static int tanimlanmasi, sadece fonksiyona ilk giriste tanimlanir, sonra tekrar tanimlanmaz.
	j++;
	cout << "j'nin degeri: " << j << endl;
}

int main() {

	// cout << i << endl; // Bu kod hata verir ver i'yi göstermez. Çünkü i, yukarıdaki
	// fonksiyon bittiğinde silindi.

	Test();
	Test();
	Test();

	cout << "static int yaptiktan sonra " << endl;

	Test2();
	Test2();
	Test2();

	return 0;
}
