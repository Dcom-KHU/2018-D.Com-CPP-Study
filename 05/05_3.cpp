#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int length, num;
	bool* arr;
	cout << "추점 번호의 갯수를 알려 주세요 : ";
	cin >> length;
	cout << "당첨 번호의 갯수를 알려 주세요 : ";
	cin >> num;

	srand(time(NULL));
	
	arr = new bool[length]; // length 길이의 bool 타입의 배열 생성
	for (int i = 0; i < length; i++)
	{
		arr[i] = false;
	}
	
	cout << "당첨 번호는 : ";
	int i = 0;
	while (i < num)
	{
		int index = rand() % length;
		if (!arr[index]) { // 중복 숫자가 아니면 
			arr[index] = true; // 이 수는 이미 출력한 숫자라는 것을 체크
			cout << index + 1 << ' ';
			++i;
		}
	}
	cout << "입니다." << endl;
	delete arr;
}