#include <iostream>
using namespace std;

int add(int x, int y) {
	return x + y;
}
int subtract(int x, int y) {
	return x - y;
}
int multiply(int x, int y) {
	return x * y;
}
int divide(int x, int y) {
	return x / y;
}
int main() {
	cout << divide(subtract(multiply(divide(add(20, 35), 5), subtract(45, 30)), 15), 5) << endl;
}