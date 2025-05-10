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
	Address address;
};

int main() {

	Employee employee = {36,"Kemal Daysal","EEM",{"Edirne",7}};

	cout << employee.id << endl;
	cout << employee.name << endl;
	cout << employee.department << endl;
	cout << employee.address.cityName << endl; // Nested structure
	cout << employee.address.No << endl;



	return 0;
}
