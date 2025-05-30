// This pointer, her bir class ve objeye ÖZGÜ bir pointerdır.

#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	int salary;
	int id;

public:

	Employee()
	{
		this->name = "Bilgi yok";
		this->salary = 0;
		this->id = 0;
	}
	
	Employee(string name)
	{
		this->name = name;
		this->salary = 0;
		this->id = 0;
	}

	Employee(string name, int salary)
	{
		this->name = name;
		this->salary = salary;
		this->id = 0;
	}

	Employee(string name, int salary, int id)
	{
		this->name = name;
		this->salary = salary;
		this->id = id;
	}

	void setSalary(int salary)
	{
		if (salary < 0)
		{
			cout << "Maaşınız 0'dan küçük olamaz." << endl;
		}

		else
		{
			this->salary = salary;
		}
	}

	int getSalary()
	{
		return salary;
	}

	void setName(string name)
	{
		this->name = name;
	}

	string getName()
	{
		return name;
	}

	void showInfos()
	{
		cout << "İsim: " << this->name << endl;
		cout << "Maaş: " << this->salary << endl;
		cout << "Id: " << this->id << endl;
	}
};


int main() {

	Employee employee1("Kemal Daysal",5000,12);
	Employee employee2("Mustafa Murat",4000);
	Employee employee3; // boş/default constructor

	employee1.showInfos();
	employee2.showInfos();
	employee3.showInfos();

	return 0;
}

