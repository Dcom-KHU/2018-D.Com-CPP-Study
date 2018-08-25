#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
} // a 와 b의 최소 공약수를 구하는 함수

class Fraction {
private:
	int numerator;
	int denominator;
public:
	// 생성자 구현 : 최대 공약수 함수를 이용, 자동으로 약분이 되게 하라!
	Fraction(int n = 1, int d = 1) : numerator(n / gcd(n,d)), denominator(d / gcd(n, d)) {}
	void print() {
		cout << numerator << '/' << denominator << endl;
	}
	void setNumer(int n) {
		int temp = gcd(n, this->denominator); // 들어온 분자와 기존 분모의 최대 공배수
		this->numerator = n / temp;
		this->denominator /= temp;
	}
	void setDeno(int d) {
		int temp = gcd(this->numerator, d); // 들어온 분모와, 기존 분자의 최대 공배수
		this->numerator /= temp;
		this->denominator = d / temp;
	}
	int getNumer() { return this->numerator; }
	int getDeno() { return this->denominator; }
};

int main() {
	Fraction f1;
	Fraction f2(6, 9);
	f1.print();
	f2.print(); // f2는 2/3
	f2.setDeno(4); // f2의 분모를 4로 만듦
	f2.print(); // 약분 되어 출력
}