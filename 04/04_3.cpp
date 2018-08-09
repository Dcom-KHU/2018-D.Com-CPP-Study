#include <iostream>
using namespace std;

int main() {
	int input;
	cout << "자연수를 입력 해 주세요 : ";
	cin >> input;
	for (int i = 0; i < 2*input-1; i++)
	{
		for (int j = 0; j < abs(i-input+1)+1; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}