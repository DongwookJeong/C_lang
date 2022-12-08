#include <stdio.h>
/*
#define _CRT_NO_SECURE_WARNINGS;
scanf 오류 해결 방안 중 하나라고 하는데 해결되지 않음
*/
int main(void) 
{
	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = arr[0] + arr[1];
	scanf_s("%d", &arr[3]);
	/*
	scanf 반환값을 어딘가에 대입하거나 사용하지 않아서 발생하는 경고.
	scanf_s로 error C4996; 해결
	*/
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);

	return 0;
}