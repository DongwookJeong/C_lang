#include <stdio.h>

int main() {
	//int i, j;
	int arr[3][2];
	scanf_s("%d", &arr[0][0]);
	scanf_s("%d", &arr[0][1]);
	scanf_s("%d", &arr[1][0]);
	scanf_s("%d", &arr[1][1]);
	scanf_s("%d", &arr[2][0]);
	scanf_s("%d", &arr[2][1]);

	printf("%d\n", arr[0][0]*arr[0][1]);
	printf("%d\n", arr[1][0]* arr[1][1]);
	printf("%d\n", arr[2][0]* arr[2][1]);
	return 0;
}

// ������ Ȥ�� ���� �Ӽ��� �����ؼ� ���� �� ������� ���ϰ�?