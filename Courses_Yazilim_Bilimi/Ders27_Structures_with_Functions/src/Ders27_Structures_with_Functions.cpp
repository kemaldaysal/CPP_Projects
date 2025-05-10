#include <iostream>
using namespace std;

struct Employee
{
	int id;
	string name;
	string department;
};


void showEmployee(Employee employee)
{
	employee.id = 30;

	cout << "Id: " << employee.id << endl;
	cout << "Isim: " << employee.name << endl;
	cout << "Departman: " << employee.department << endl;
}

void showEmployeePtr(Employee* employee)
{
	employee->id = 30;

	cout << "Id: " << employee->id << endl;
	cout << "Isim: " << employee->name << endl;
	cout << "Departman: " << employee->department << endl;
}

int main() {

	Employee employee1 = {12,"Mustafa Murat Coskun","Bilisim"};

	showEmployee(employee1);
	cout << "Fonksiyon disindaki id: " << employee1.id << endl;

	cout << endl << "--- Pointer ile gosterim ---" << endl << endl;

	showEmployeePtr(&employee1);
	cout << "Fonksiyon disindaki id: " << employee1.id << endl;

	return 0;
}


// Fonksiyon içindeki herhangi bir değer (id,name vs.) değiştirilmek
// istenirse mutlaka pointerlı yöntem kullanılmalıdır. call by reference
// ya da pass by reference yöntemi.
