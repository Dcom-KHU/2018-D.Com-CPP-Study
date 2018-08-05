#include <iostream>
using namespace std;

int main() {
	int num;
	bool check = false;
	cout << "자연수를 입력해 주세요 : ";
	cin >> num;
	for (int i = 2; i <= num / 2; i++) // num / 2 까지만 검사하는 이유 : 그 이후는 검사할 필요가 없다.
	{
		if (num % i == 0) {
			check = true; // 자기보다 작은, 1보다 큰수로 나누어 지는 경우
			break;
		}
	}
	if (check) {
		cout << "소수가 아닙니다" << endl;
	}
	else {
		cout << "소수 입니다!" << endl;
	}
}