#include <iostream>
using namespace std;

class Test
{

private:
	int a;
public:
	Test(int a)
	{
		this -> a = a;
	}
	int getValue() const // Bu metod herhangi bir değeri değiştiremez. Const olmayan metodları çağıramaz.
	{
		this -> a = 20;
		return this->a;
	}

};

void test(const Test &test)
{
	cout << test.getValue() << endl;
}

int main() {

	Test test(10);
	test(test);

	return 0;
}
