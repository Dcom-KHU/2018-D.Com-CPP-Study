#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, c, sum;
	vector<int> v(10, 0);
	cout << "숫자 3개를 입력 해 주세요 : ";
	cin >> a >> b >> c;
	
	sum = a * b * c;
	while (sum != 0) {
		v[sum % 10]++;
		sum /= 10;
	}
	cout << "답은 (0,1,2,3,4,5,6,7,8,9) 순으로 : ";
	
	for (int& elem : v)
		cout << elem << ' ';
	
	cout << endl;
}