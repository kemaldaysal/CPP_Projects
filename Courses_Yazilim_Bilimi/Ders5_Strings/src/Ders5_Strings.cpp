#include <iostream>
using namespace std;

int main() {
// C'de string bulunmazken, C++'da default olarak string veri tipi vardır.
	string str1 = "Bu bir stringdir.";
	string str2 = "Bu da bir stringdir";

	string str3 = str1 + str2;

	cout << "Str1: " << str1 << endl;
	cout << "Str2: " << str2 << endl;
	cout << "Str3: " << str3 << endl;

	return 0;
}
