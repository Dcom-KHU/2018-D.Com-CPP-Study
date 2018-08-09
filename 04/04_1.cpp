#include <iostream>
using namespace std;

int main() {
	int input;
	cout << "자연수를 입력 해 주세요 : ";
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}