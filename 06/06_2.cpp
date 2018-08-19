#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string input_line, output_line;
	ifstream input;
	ofstream output;
	int a, b;
	char oper, buf;
	input.open("input.txt");
	output.open("output.txt");
	if (input.is_open()) {
		while (input) // 읽을 것이 없을 시 while문 탈출
		{
			input >> a >> oper >> b >> buf;
			if (!input)
				break;
				// 마지막 데이터 "그 이후를 읽었을 때" input은 false를 반환한다.
				// 그래서 이 문구는 input이 데이터를 읽은 후 삽입 한다.
			output << a << ' ' << oper << ' ' << b << " = ";
			switch (oper)
			{
			case '+':
				output << a + b;
				break;
			case '-':
				output << a - b;
				break;
			case '/':
				output << a / b;
				break;
			case '%':
				output << a % b;
				break;
			case '*':
				output << a * b;
				break;
			default:
				break;
			}
			output << endl;
		}
	}
	input.close();
	output.close();
}