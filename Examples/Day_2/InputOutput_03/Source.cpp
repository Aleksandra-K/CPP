#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout("MyFile.txt"); // ������ ����� ��� ������ � ��������� ��� � ������ 
	int i = 0;
	// ������� ��������� �����
	// ���������� ���� � ������������
	while (i < 10) {
		fout << i++; // ������ ������ � ����
	}
	fout.close(); // ��������� ����
	system("pause");
	return 0;
}