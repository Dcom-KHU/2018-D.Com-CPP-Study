#include <iostream>
using namespace std;

int func(int(*f)(int)) {
	return f(5);
}
int main() {
	cout << "5의 제곱은 : " << func([](int x)->int {return x*x; }) << endl; // 파라미터 안을 채워라!
	cout << "5의 세제곱은 : " << func([](int x)->int {return x*x*x; }) << endl; // 다른 건 건들지 말고!
}