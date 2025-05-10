#include <iostream>
using namespace std;

class Employee
{
public:
	Employee()
	{
		cout << "Constructor çağırıldı." << endl;
	}

	~Employee() // destructor kullanimi
	{
		cout << "Destructor çağırıldı." << endl;
	}
};

int main()
{

	Employee *emp = new Employee();

	delete emp;

	return 0;
}
