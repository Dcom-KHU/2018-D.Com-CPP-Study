#include <iostream>
using namespace std;

double arr_average(int* arr, int length) {
	double sum = 0.0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum / length;
}
int main() {
	int length;
	int* arr; // 배열의 동적 할당을 위함
	cout << "배열의 길이를 입력해 주세요 : ";
	cin >> length;

	arr = new int[length]; // 입력한 길이 만큼 할당
	for (int i = 0; i < length; i++)
	{
		cout << i + 1 << "번째 수를 입력해 주세요 : ";
		cin >> arr[i];
	}
	cout << "총 평균은 : " << arr_average(arr, length) << "입니다!" << endl;
	delete arr; // 꼭 필요합니다!
}