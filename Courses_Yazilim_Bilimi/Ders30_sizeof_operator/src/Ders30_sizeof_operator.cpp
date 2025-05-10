#include <iostream>
using namespace std;

struct Student
{
	int id;
	char letter;
};


int main() {

	int a = 10;

	cout << "Herhangi bir INTEGER in kapladığı yer: " << sizeof(int) << " bayt = " << sizeof(int)*8 << " bit" << endl;
	cout << "a INTEGER inin kapladığı yer: " << sizeof(a) << " bayt = " << sizeof(a)*8 << " bit" << endl;

	cout << "Herhangi bir CHAR ın kapladığı yer: " << sizeof(char) << " bayt = " << sizeof(char)*8 << " bit" << endl;
	cout << "Herhangi bir DOUBLE ın kapladığı yer: " << sizeof(double) << " bayt = " << sizeof(double)*8 << " bit" << endl;
	cout << "Herhangi bir FLOAT ın kapladığı yer: " << sizeof(float) << " bayt = " << sizeof(float)*8 << " bit" << endl;

	cout << "Student STRUCT ının kapladığı yer: " << sizeof(Student) << " bayt = " << sizeof(Student)*8 << " bit" << endl;

	// NOT: Student structının içinde 1 adet 4 baytlık id integerı ve
	// 1 adet 1 baytlık letter charı bulunmakta. Ancak struct'ın bellekte
	// kapladığı bayt 5 bayt olması gerekirken 8 bayt. Bu durum
	// structın compile edilirken ve belleğe yetişirken ekstra baytlar eklenmesinden
	// dolayı kaynaklanmaktadır.

	return 0;
}
