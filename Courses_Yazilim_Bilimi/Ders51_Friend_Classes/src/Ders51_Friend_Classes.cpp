#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	int age;
	int salary;

public:
	Employee(string name, int age, int salary)
	{
		this->name = name;
		this->age = age;
		this->salary = salary;
	}
	friend class Test; // Artik Test'in icindeki tum fonksiyonlar, Employee classinin private tanimlamalarina erisebilir.
};

class Test
{
public:
	static void showInfos(Employee employee)
	{
	cout << employee.name << " " << employee.age << " " << employee.salary << endl;
	}
};



int main() {

	Employee employee("Kemal",20,5000);

	Test::showInfos(employee);

	return 0;
}

