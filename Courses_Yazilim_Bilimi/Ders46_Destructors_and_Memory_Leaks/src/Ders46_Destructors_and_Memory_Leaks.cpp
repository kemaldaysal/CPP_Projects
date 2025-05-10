#include <iostream>
using namespace std;

class Employee
{
public:

	string *s;
	int *i;

	Employee(string str, int ivalue)
	{
		s = new string;

		i = new int;

		*s = str;
		*i = ivalue;
	}

	void show()
	{
		cout << "String deger: " << *s << ", int deger: " << *i << endl;
	}

	~Employee() // destructor kullanımı
	{

		delete s;
		delete i;
		cout << "Destructor cagirildi." << endl;
	}

};


int main() {

	Employee *emp = new Employee("Kemal Daysal",20);

	emp->show();
	
	delete emp;
	
	Employee *second_worker = new Employee("Hasan", 36);
	
	second_worker->show();
	
	delete second_worker;


	return 0;
}

