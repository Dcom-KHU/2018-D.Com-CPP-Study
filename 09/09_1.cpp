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
	friend ostream& operator<<(ostream&, const Fraction&);
	friend Fraction operator+(int, const Fraction&);
	friend Fraction operator-(int, const Fraction&);
	// 생성자 구현 : 최대 공약수 함수를 이용, 자동으로 약분이 되게 하라!
	Fraction(int n = 1, int d = 1) : numerator(n / gcd(n, d)), denominator(d / gcd(n, d)) {}
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
	Fraction operator+(const Fraction& f) {
		return Fraction(this->numerator*f.denominator + this->denominator*f.numerator, this->denominator*f.denominator);
	}
	Fraction operator-(const Fraction& f) {
		return Fraction(this->numerator*f.denominator - this->denominator*f.numerator, this->denominator*f.denominator);
	}
	Fraction operator*(const Fraction& f) {
		return Fraction(this->numerator*f.numerator, this->denominator*f.denominator);
	}
	Fraction operator/(const Fraction& f) {
		return Fraction(this->numerator*f.denominator, this->denominator*f.numerator);
	}
	Fraction& operator=(const Fraction& f) {
		return Fraction(f.numerator, f.denominator);
	}
	bool operator==(const Fraction& f) {
		return this->numerator*f.denominator == this->denominator*f.numerator;
	}
	bool operator!=(const Fraction& f) {
		return this->numerator*f.denominator != this->denominator*f.numerator;
	}
	bool operator>=(const Fraction& f) {
		return this->numerator*f.denominator >= this->denominator*f.numerator;
	}
	bool operator<=(const Fraction& f) {
		return this->numerator*f.denominator <= this->denominator*f.numerator;
	}
	bool operator>(const Fraction& f) {
		return this->numerator*f.denominator > this->denominator*f.numerator;
	}
	bool operator<(const Fraction& f) {
		return this->numerator*f.denominator < this->denominator*f.numerator;
	}
};
ostream& operator<< (ostream& os, const Fraction& f) {
	return os << f.numerator << '/' << f.denominator;
}
Fraction operator+(int d, const Fraction& f) {
	return (f.numerator + f.denominator * d, f.numerator);
}
Fraction operator-(int d, const Fraction& f) {
	return (f.numerator - f.denominator * d, f.numerator);
}
int main() {
	Fraction f(3, 4);
	cout << f + 2 << endl;
}

int main() {
	Fraction f1(3, 4);
	Fraction f2(1, 2);
	Fraction f3 = f1 + f2;
	Fraction f4 = f1 - f2;
	Fraction f5 = f1 * f2;
	Fraction f6 = f1 / f2;
	f3.print();
	f4.print();
	f5.print();
	f6.print();
	f1 = f2;
	cout << f1 << endl;
	cout << (f1 > f2) << ' ' << (f1 < f2) << endl;
	cout << (f1 != f2) << ' ' << (f1 == f2) << endl;
}