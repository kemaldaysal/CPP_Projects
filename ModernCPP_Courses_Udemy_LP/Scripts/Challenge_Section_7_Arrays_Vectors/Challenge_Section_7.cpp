#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector <int> vector_1;
    vector <int> vector_2;

    vector_1.push_back(10);
    vector_1.push_back(20);

    cout << "vector_1 Element 1: " << vector_1.at(0) << " Element 2: " << vector_1.at(1) << " Vector_1 size: " << vector_1.size() << endl;

    vector_2.push_back(100);
    vector_2.push_back(200);

    cout << "vector_2 Element 1: " << vector_2.at(0) << " Element 2: " << vector_2.at(1) << " Vector_2 size: " << vector_2.size() << endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);

    cout << "vector_2d\nrow 0 col 0: " << vector_2d.at(0).at(0) << "\nrow 0 col 1: " << vector_2d.at(0).at(1) << "\nrow 1 col 0: " << vector_2d.at(1).at(0) << "\nrow 1 col 1: " << vector_2d.at(1).at(1) << endl;

    vector_1.at(0) = 1000;
    // Because of call by value, because we didn't change the value on the address, the changed value of vector_1 didn't reflected to vector_2d. vector_2d stayed same because we didn't use a pointer.
    cout << "New vector_2d after changing vector_1.at(0) to 1000" << endl;
    cout << "vector_2d\nrow 0 col 0: " << vector_2d.at(0).at(0) << "\nrow 0 col 1: " << vector_2d.at(0).at(1) << "\nrow 1 col 0: " << vector_2d.at(1).at(0) << "\nrow 1 col 1: " << vector_2d.at(1).at(1) << endl;
    cout << "new vector_1 Element 1: " << vector_1.at(0) << " Element 2: " << vector_1.at(1) << " Vector_1 size: " << vector_1.size() << endl;


    return 0;
}