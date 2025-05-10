#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	int salary;
	int id;

public:

	Employee(string isim, int maas, int kimlik) // CONSTRUCTOR adi mutlaka class adiyla ayni olmalidir !!
	{
		name = isim;
		salary = maas;
		id = kimlik;
	}

	void setSalary(int maas)
	{
		if (maas < 0)
		{
			cout << "Maaşınız 0'dan küçük olamaz." << endl;
		}

		else
		{
			salary = maas;
		}
	}

	int getSalary()
	{
		return salary;
	}

	void setName(string isim)
	{
		name = isim;
	}
	
	void setId(int kimlik)
	{
		id = kimlik;
	}

	string getName()
	{
		return name;
	}

	void showInfos()
	{
		cout << "Isim: " << name << endl;
		cout << "Maas: " << salary << endl;
		cout << "Id: " << id << endl;
	}
};


int main() {

	Employee worker("Kemal Daysal",5000,12);
	worker.showInfos();
	
//	// If we haven't used the constructors, we should've defined the specs like below:
//	Employee worker2;
//	
//	worker2.setName("Hasan");
//	worker2.setSalary(3500);
//	worker2.setId(24); 
//	worker2.showInfos();
//  // But as we already defined the constructor for Employee, from now on we should define the new workers by using the constructor, otherwise we'll encounter an error.


	return 0;
}

