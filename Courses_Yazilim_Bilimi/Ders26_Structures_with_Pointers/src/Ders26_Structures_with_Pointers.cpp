#include <iostream>
using namespace std;

struct Employee
{
	int id;
	string name;
	string department;
};


int main() {

	Employee employee1 = {12,"Mustafa Murat Coskun","Bilisim"};

	Employee* ptr = &employee1;

	cout << ptr->id << endl;
	cout << ptr->name << endl;
	cout << ptr->department << endl;
	
	cout << "ptr address: " << ptr << endl;
	cout << "ptr+1 address: " << ptr+1 << endl;
	cout << "ptr+2 address: " << ptr+2 << endl;
	cout << "ptr+3 address: " << ptr+3 << endl;
	cout << "ptr+4 address: " << ptr+4 << endl;


	
//	cout << "Ptr value: " << *ptr << " with address of: " << ptr << endl;
//	cout << "Ptr+1 value: " << *(ptr+1) << " with address of: " << (ptr+1) << endl;
//	cout << "Ptr+2 value: " << *(ptr+2) << " with address of: " << (ptr+2) << endl;
//	cout << "Ptr+3 value: " << *(ptr+3) << " with address of: " << (ptr+3) << endl;

	return 0;
}
