#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int arr[10]; // �������� ������ �� 10 ���������

	// ���������� ������������ �����
	srand(time(0));
	cout << "RAND_MAX = "<< RAND_MAX << "\n"; // �������� ��������� RAND_MAX
	// ��������� ���������� ����� �� ��������� �� A �� B
	int A = 10, B = 11;
	cout << "Random value " << A + rand() % (B - A + 1) << "\n";	
	// ��������� ������������ �������� (0, 1)
	cout << "Random double " << (double)rand() / RAND_MAX << "\n";
	// �������� ������
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100; // �������� �� 0 �� 99
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}