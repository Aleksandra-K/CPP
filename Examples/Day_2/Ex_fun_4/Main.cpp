#include <iostream>
using namespace std;

void print(char* str1, char *str2 = "Default string") {
	cout << str1 << " " << str2 << "\n";
}
int main() {
	char *text = new char[256];
	cout << "Enter your string: ";
	cin >> text;
	// ����������� �������� ����� ��������
	print(text, "My string");
	// � ������� ��������� ���� ������������ 
	// ��������, ��� ����� �������� ��� ������
	print(text);
	delete text; // ����������� ������
	return 0;
}
