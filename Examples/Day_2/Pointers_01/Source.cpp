#include <iostream>
using namespace std;

int main() {
	double x = 3;
	int *ptr1(nullptr);
	double *ptr2;
	ptr2 = &x; // ��������� ������ � ������� x	
	cout << *ptr2; // ��������� �������� �� ������
	system("pause");
	return 0;
}