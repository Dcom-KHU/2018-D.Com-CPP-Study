#include <iostream>
using namespace std;

int main() {
	int num = 0, a, b; // num에 비교연산을 위해선 무조건 값을 넣어 줘야 한다.
	while (num != 5) // num == 2 일시 탈출
	{
		system("cls"); // 콘솔 초기화
		cout << "===== 간단 간단 계산기~ =====" << endl;
		cout << "1. 덧셈" << endl;
		cout << "2. 뺄셈" << endl;
		cout << "3. 곱셈" << endl;
		cout << "4. 나눗셈" << endl;
		cout << "5. 나가기" << endl;
		cout << "===========================" << endl;
		cout << "값을 입력해 주세요 : ";
		cin >> num; // 값을 입력 받는다.
		switch (num)
		{
		case 1: // 1 입력시
			cout << "수 2개를 입력해 주세요 : ";
			cin >> a >> b;
			cout << "답은 " << a + b << "입니다!" << endl;
			system("pause"); // 화면 중지
			break;
		case 2: // 2 입력시
			cout << "수 2개를 입력해 주세요 : ";
			cin >> a >> b;
			cout << "답은 " << a - b << "입니다!" << endl;
			system("pause"); // 화면 중지
			break;
		case 3: // 3 입력시
			cout << "수 2개를 입력해 주세요 : ";
			cin >> a >> b;
			cout << "답은 " << a * b << "입니다!" << endl;
			system("pause"); // 화면 중지
			break;
		case 4: // 4 입력시
			cout << "수 2개를 입력해 주세요 : ";
			cin >> a >> b;
			cout << "답은 " << a / b << "입니다!" << endl;
			system("pause"); // 화면 중지
			break;
		case 5: // 5 입력시
			cout << "프로그램 종료" << endl;
			break;
		default: // 그 이외의 값 입력시
			cout << "잘못 입력했습니다." << endl;
			break;
		}
	}
}