#include <iostream>
using namespace std;

class Student
{
public: // Alta yazılacak tüm metodlar public olacak ve her taraftan erişilebilecek.
// Her tarafın anlamı, sadece class içinde değil, main fonksiyonu içinde de erişilebilecek.
	string name;
	int age;

};


int main() {

	Student student1;
	Student student2;

	student1.name = "Kemal Daysal";
	student1.age = 23;
	student2.name = "Ayberk";
	student2.age = 24;

	cout << "1. ogrencinin adi: " << student1.name << ", yasi: " << student1.age << endl;
	cout << "2. ogrencinin adi: " << student2.name << ", yasi: " << student2.age << endl;


	return 0;
}
