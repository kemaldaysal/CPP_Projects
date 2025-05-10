#include <iostream>
using namespace std;

struct Address
{
	string cityName;
	int No;
};

struct Employee
{
	int id;
	string name;
	string department;
	Address* address;
};


int main() {

	Employee employee;
	employee.id = 36;
	employee.name = "Kemal Daysal";
	employee.department = "EEM";

	Address adres_1 = {"Edirne",7};

	employee.address = &adres_1;

	Employee* ptr = &employee;

	cout << ptr->address->cityName << endl;
	cout << ptr->address->No << endl;

	return 0;
}
