#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string name;
	int studentID;
	string major;

	cout << "이름과 학번 전공을 입력하세요" << endl;
	cin >> name >> studentID >> major;

	cout << name << " " << studentID << " " << major << endl;
}