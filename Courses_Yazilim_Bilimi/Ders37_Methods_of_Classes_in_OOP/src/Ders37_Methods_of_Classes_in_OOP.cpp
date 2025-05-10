#include <iostream>
using namespace std;

class Student
{
	public:
	string name; // özellik

	void tellName() // metod // student classina ozel fonksiyon eklemis olduk.
	{
		cout << "Benim adim: " << name << endl;
	}

};

int main() {

	Student student1;
	Student student2;

	student1.name = "Kemal Daysal";
	student2.name = "Ayberk";

	student1.tellName();
	student2.tellName();
	
//	tellName(); // this won't work because it's not declared in this scope.


	return 0;
}
