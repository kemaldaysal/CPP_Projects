#include <iostream>
using namespace std;

class Employee
{
private:
	string name;

public:

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

	cout << worker.getName() << endl;
	
//	cout << worker.name << endl; // won't work because name is private. You can only access it by using that getName function.


	return 0;
}


// classı private yaptığımızdan, class içindeki fonksiyon ve bilgilere sadece
// olduğu yerde erişilebilir, main'de erişilemez.
