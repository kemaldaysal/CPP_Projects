#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	int age;

public:

	void setAge(int yas)
	{
		if (yas < 0)
		{
			cout << "Böyle bir değer veremezsiniz." << endl;
		}

		else
		{
			age = yas;
		}
	}

	int getAge()
	{
		return age;
	}

	void setName(string isim)
	{
		name = isim;
	}

	string getName()
	{
		return name;
	}
};


int main() {

	Employee* worker = new Employee();

	worker->setName("Kemal Daysal");
	worker->setAge(20);

	cout << worker->getName() << endl;
	cout << worker->getAge() << endl;
	
	delete worker;

//	cout << worker->getName() << endl; // avoid this, it'll lead to memory segmentation fault after deleting (freeing it after malloc is done) it's pointer.


	return 0;
}
