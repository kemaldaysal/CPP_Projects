#include <iostream>
using namespace std;


int main() {
	

// Koşul ne olursa olsun breakten sonra döngüden çıkar.

	int i = 0;

	while(i<10)
	{
		if (i==5)
		{
			break;
		}
		cout << "i: " << i << endl;
		i++;
	}


	cout << "*******" << endl;

// continueya gelince döngü, continuedan sonraki hiçbir komutu
// çalıştırmadan DÖNGÜNÜN BAŞINA DÖNER.

	for (int j = 0; j < 10; j++)
	{
		if (j==3 || j==5)
		{
			continue;
		}
		cout << "j : " << j << endl;
	}

// Böylece 3 ve 5'i sayma sırasında atladı.

//*****************************************************
	cout << "*****************" << endl << endl;


	int k = 0;

	while (k<10)
	{
		k++;
		if (k==3 || k==5)
		{
			continue;
		}
		cout << "k: " << k << endl;

	}


	cout << "*****************" << endl << endl;

	string sys_username = "kemal_daysal";
	string sys_password = "123456";

	string username;
	string password;

	while (true)
	{
		cout << "Kullanıcı adınızı girin: ";
		cin >> username;

		cout << "Parolanızı girin: ";
		cin >> password;

		if (username == sys_username && password == sys_password)
		{
			cout << "Hoşgeldiniz, " << username << endl << endl;
			break;
		}

		else if (username != sys_username && password == sys_password)
		{
			cout << "Kullanıcı adı hatalı." << endl << endl;
		}

		else if (username == sys_username && password != sys_password)
		{
			cout << "Parola hatalı." << endl << endl;
		}

		else
		{
			cout << "Hem kullanıcı adı hem de parola hatalı." << endl << endl;
		}
	}

	return 0;
}

