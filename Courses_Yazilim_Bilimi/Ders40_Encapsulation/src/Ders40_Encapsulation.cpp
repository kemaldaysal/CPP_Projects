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
			cout << "Boyle bir deger veremezsiniz." << endl;
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

	Employee worker;

	worker.setName("Kemal Daysal");
	worker.setAge(-4);

	cout << worker.getName() << endl;
	cout << worker.getAge() << endl;

	return 0;
}

// https://youtu.be/T_ZWP7bgsLY?list=PLIHume2cwmHfmSmNlxXw1j9ZAKzYyiQAq
