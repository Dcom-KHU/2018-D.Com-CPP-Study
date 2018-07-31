#include <iostream>
using namespace std;

int addDigit(int x) {
	return x / 10 + x % 10;
}
int main() {
	int x;
	cout << "두 자리수를 입력해 주세요 : ";
	cin >> x;
	cout << "두 자릿수를 더하면... : " << addDigit(x) << endl;
}