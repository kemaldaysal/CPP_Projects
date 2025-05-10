#include <iostream>
using namespace std;

struct Employee
{
	int id;
	string name;
	string department;
};


int main() {

	Employee employee1 = {12,"Mustafa Murat","Bilisim"};

	cout << "1. calisanin adi: " << employee1.name << endl;

	employee1.name = "Mert Coskun";

	cout << "1. calisanin guncellenmis adi: " << employee1.name << endl;

	// 2. Çalışan için kayıt yaptırma

	Employee employee2;

	employee2.id = 36;
	employee2.name = "Kemal Daysal";
	employee2.department = "Muhendis";

	cout << "2. calisanin departmani: " << employee2.department << endl;

	return 0;
}
