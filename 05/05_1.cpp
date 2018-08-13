#include <iostream>
using namespace std;

void swap(int* ptr1, int* ptr2) {
	int temp = *ptr1; // ptr1 주소값 접근 후 대입
	*ptr1 = *ptr2; // ptr1에 prt2가 가르키는 값 대입
	*ptr2 = temp; // temp값 대입
}
int main() {
	int a = 5;
	int b = 7;
	swap(&a, &b);
	cout << a << ' ' << b << endl;
}