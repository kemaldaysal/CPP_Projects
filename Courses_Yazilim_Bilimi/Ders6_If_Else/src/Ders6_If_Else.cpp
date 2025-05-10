#include <iostream>
using namespace std;

int main() {

	string password = "yazilimbilimi";
	string input;

	cout << "Lütfen parolanızı girin: ";
	cin >> input;

	if (input == password)
	{
		cout << "Parolanızı doğru girdiniz." << endl;

	}

	else
	{
		cout << "Parolanızı yanlış girdiniz." << endl;
	}

	return 0;
}
