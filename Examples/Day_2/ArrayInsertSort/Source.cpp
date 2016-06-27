#include <iostream>
#include <ctime>
using namespace std;
#define N 10
void insertionSort(int a[], int n) {
	for (int i = 1; i < n; i++) { // ����� i-��� �������� ������ ������������
		int k = a[i]; // ����������, ������ ��� ������ �������
		int j = i - 1;
		while (j >= 0 && a[j] > k) { // ������� ��� ��������, ������ k
			//comp++;
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k; // ������ k �� �����
	}
}
int main() {
	int arr[N]; // �������� ������ �� 10 ���������

				 // ���������� ������������ �����
	srand(time(0));
	// �������� ������
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 100; // �������� �� 0 �� 99
		cout << arr[i] << " ";
	}
	insertionSort(arr, N);
	cout << "================\n";
	for (int i = 0; i < N; i++) {		
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}