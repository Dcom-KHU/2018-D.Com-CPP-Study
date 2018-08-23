#include <iostream>
#include <vector>
using namespace std;

int Sfunc(int(*fptr) (int, int)) {
	return fptr(2, 3);
}
int func1(int a, int b) {
	return a * b;
}
int func2(int a, int b) {
	return a + b;
}
int func3(int a, int b) {
	return a - b;
}
int main() {
	cout << "2, 3의 곱셈은? : " << Sfunc(func1) << endl;
	cout << "2, 3의 덧셈은? : " << Sfunc(func2) << endl;
	cout << "2, 3의 뺄셈은? : " << Sfunc(func3) << endl;
}