#include <iostream>
using namespace std;

int getIntValue(); // ����������� �������
int main() {
	int x = getIntValue(); // ����� �������
	cout << sqrt(x);
	system("pause");
	return 0;
}
int getIntValue() { // �������� �������
	int x;
	cout << "Enter integer value: ";
	cin >> x;
	return x;
}
