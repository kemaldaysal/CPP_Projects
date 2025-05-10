#include <iostream>
using namespace std;

int main() {

/*					//     0       1       2
	                //   0 1 2   0 1 2   0 1 2
	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	cout << matris[0][1] << endl; // 0. index yani {1,2,3} içerisinden 1. index olan {2}'yi alacağız.
	cout << matris[2][2] << endl; // 9'u alır.
	cout << matris[1][0] << endl; // 4'ü alır.
*/



// Kullanıcının girdiği çok boyutlu matris


	int matris[3][3];

	cout << "Matris degerlerini giriniz: " << endl;
	for (int i = 0; i < 3 ; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matris[i][j];
		}
	}
	cout << "Matris: " << endl;

	for (int i=0 ; i<3 ; i++)
	{
		for (int j = 0; j<3 ; j++)
		{
			// test cout << "i: " << i << "  j: " << j << endl;

			cout << matris[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
