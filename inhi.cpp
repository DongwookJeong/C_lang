#include <stdio.h>
/*
#define _CRT_NO_SECURE_WARNINGS;
scanf ���� �ذ� ��� �� �ϳ���� �ϴµ� �ذ���� ����
*/
int main(void) 
{
	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = arr[0] + arr[1];
	scanf_s("%d", &arr[3]);
	/*
	scanf ��ȯ���� ��򰡿� �����ϰų� ������� �ʾƼ� �߻��ϴ� ���.
	scanf_s�� error C4996; �ذ�
	*/
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);

	return 0;
}