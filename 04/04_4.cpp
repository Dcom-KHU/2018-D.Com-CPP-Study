#include <iostream>
using namespace std;

double average(int arr[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return (double)sum / length;
}
int main() {
	int inputArr[4];
	cout << "국어 점수를 입력 해 주세요 : ";
	cin >> inputArr[0];
	cout << "수학 점수를 입력 해 주세요 : ";
	cin >> inputArr[1];
	cout << "영어 점수를 입력 해 주세요 : ";
	cin >> inputArr[2];
	cout << "과학 점수를 입력 해 주세요 : ";
	cin >> inputArr[3];
	
	cout << "평균 점수는 : " << average(inputArr, 4) << " 입니다." << endl;
}