#include <iostream>
using namespace std;

void factorial(int sayi)
{
	int faktoriyel_sonucu = 1;
	for (int i=sayi ; i>=1 ; i--)
	{
		faktoriyel_sonucu = faktoriyel_sonucu * i;
	}
	cout << "Faktoriyel sonucu: " << faktoriyel_sonucu << endl;
}

int main() {

	int input;
	cout << "Faktoriyelini bulmak istediginiz sayiyi giriniz: ";
	cin >> input;

	factorial(input);

	return 0;
}
