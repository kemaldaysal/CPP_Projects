#include <iostream>
using namespace std;

int main() {

	string sys_username = "kemal_daysal";
	string sys_password = "123456";

	string username;
	string password;

	cout << "Kullanıcı adınızı girin: ";
	cin >> username;

	cout << "Parolanızı girin: ";
	cin >> password;

	if (sys_username == username && sys_password == password)
	{
		cout << "Bilgileriniz doğru, hoşgeldiniz." << endl;
	}

	else if (sys_username != username || sys_password != password)
	{
		cout << "Kullanıcı adınız veya parolanız hatalı" << endl;
	}

	else
	{
		cout << "Bilinmeyen girdi" << endl;
	}

	return 0;
}
