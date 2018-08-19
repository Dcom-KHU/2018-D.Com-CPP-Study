#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream output;
	string line;
	cout << "문서 이름을 입력 해 주세요 : ";
	getline(cin, line);
	cout << endl;
	output.open(line.c_str()); // c_str 함수를 이용, char*를 매개변수로 받는 open함수가 작동할 수 있게 한다.
	cout << "문서 작성을 시작합니다. 종료 하고 싶으시다면 \"!@#$%^&*()\"를 입력 해 주세요 : " << endl;
	while (true)
	{
		getline(cin, line);
		if (line == "!@#$%^&*()")
			break;
		else
			output << line << endl;
	}
	cout << endl;
	output.close();
}