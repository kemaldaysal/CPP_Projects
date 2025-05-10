#include <iostream>
using namespace std;

int main() {

	int i = 1;
	int j = 1;
	cout << "Başlangıç i: " << i << "Başlangıç j: " << j << endl;


	while ((i < 10) || (j < 5)) // i, 10'a eşit veya büyük oluncaya kadar döngüdeki işlemleri yap.
	{
		i = i + 1;
		j++;
		cout << "i: " << i << " j: " << j << endl;
	}
	
	i = 0;
	j = 0;
	
	cout << "Second trial with and gate" << endl;
	cout << "starting i: " << i << " starting j: " << j << endl;
	
		while ((i < 10) && (j < 5)) // i, 10'a eşit veya büyük oluncaya kadar döngüdeki işlemleri yap.
	{
		i = i + 1;
		j++;
		cout << "i: " << i << " j: " << j << endl;
	}

	return 0;
}
