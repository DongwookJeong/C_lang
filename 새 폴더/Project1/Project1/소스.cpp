#include <stdio.h>
int percent(int r, int g, int b);

int main(){
	//float r= 234;
	//float g= 35;
	//float b= 123;
	float rgb;
	rgb = percent(200.0, 56.0, 123.0);
	//printf("%f\n", rgb);//21.0000 > �Ҽ����� ������ ���� ���� 
	return 0;
	
}
int percent(int r, int g, int b) {
	float rgb;
	rgb = r / 255.0 * 100.0;
	//rgb = g / 255 * 100;
	//rgb = b / 255 * 100;
	printf("����%f\n", rgb);
	return rgb;
}
/*
* int main(){
	float r = 205;
	printf("%f�̴�.", r / 255 * 100);//78.431374�̴�.
	return r;
}
*/
/*
* int percent(int r);

int main() {
	int rgb;
	int r = 200;
	rgb = percent(r);
	printf("�ʴ� ������? %f", rgb/255*100);
	return 0;
}
int percent(int r) {
	int rgb;//, rgbG, rgbB;
	
	rgb = r / 255;

	//rgbG = g / d * 100;
	//rgbB = b / 255 * 100;
	return rgb;
}
*/

/*
* ������ ���� ����(call by reference)
* void local(int*);

int main(void) {
	int var = 10;
	printf("���� var�� �ʱ갪�� %d�Դϴ�.\n", var);
	//���� var�� �ʱ갪�� 10�Դϴ�.

	local(&var);
	printf("local() �Լ� ȣ�� �� ���� var�� ���� %d�Դϴ�.\n", var);
	//local() �Լ� ȣ�� �� ���� var�� ���� 20�Դϴ�.
	return 0;
}
void local(int* num) {
	*num += 10;
}
*/

/*
* ���� ���� ����(call by value)
* num�� ���� �ƹ��� �����ϴ��� ���� �μ��� ���޵� ���� var�� ���� ���� ������� �ʴ´�.
* void local(int);

int main() {
	int var = 10;
	printf("���� var�� �ʱ갪�� %d�Դϴ�.\n", var);
	//���� var�� �ʱ갪�� 10�Դϴ�.

	local(var);
	printf("local() �Լ� ȣ�� �� ���� var�� ���� %d�Դϴ�.\n", var);
	//local() �Լ� ȣ�� �� ���� var�� ���� 10�Դϴ�.
	return 0;
}
void local(int num) {
	num += 10;
}
*/

/*
* void func() {
	printf("function\n");
	}

int main() {
	void (*ptr)();
	ptr = &func;//function
	(*ptr)();
	//�����Ӹ� �ƴ϶� �Լ� ���� C��� �����ͷ� ����� �� �ִ�.
	return 0;
}
*/

/*
* 	int a = 1;
	int* ptr;

	ptr = &a;

	*ptr = 128;

	printf("%d\n", a);//128
	// a �ּ� �Ҵ�, �� �� *ptr�� 128�̶�� ���� �Ҵ�
	// �� a�� �ּҸ� �ǹ� *ptr�� ���� ���� a�� ���
*/

/*
* char a[8];//����
	char* ptr;
	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = 'f';
	a[6] = 'g';
	a[7] = '\0';//���� �ʿ�
	------------------------------------
	ptr = a;
	printf("%c\n", *ptr);
	ptr = ptr + 3;
	printf("%c\n", *ptr);
	// ptr = ptr + 3 => �ּ� ��ġ �̵�
	------------------------------------
	ptr = a;
	*ptr = 'z';
	ptr += 3;
	*ptr = 'w';
	printf("%s\n", a);
	//zbcwefg a�� z�� �ٲٰ� 4��°�� �ִ� d�� w�� �ٲ�
*/
/*
* ++ ����
* char* ptr_char = 0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00;
	printf("������ ptr_char�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_char);
	printf("������ ptr_int�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_int);
	printf("������ ptr_double�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_double);

	printf("������ ptr_char�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_char);
	printf("������ ptr_int�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_int);
	printf("������ ptr_double�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_double);

*/
/*
* %#x �ּҰ�, %d decimal, %f float
	int num01 = 1234;

	double num02 = 3.14;
	int* ptr_num01 = &num01;
	double* ptr_num02 = &num02;

	printf("�������� ũ��� %d�Դϴ�.\n", sizeof(ptr_num01));
	printf("������ ptr_num01�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_num01);
	printf("������ ptr_num02�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_num02);
	printf("������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num01);
	printf("������ ptr_num02�� ����Ű�� �ִ� �ּҿ� ����� ���� %f�Դϴ�.\n", *ptr_num02);

		�������� ũ��� 8�Դϴ�.
		������ ptr_num01�� ����Ű�� �ִ� �ּҰ��� 0x18cff974�Դϴ�.
		������ ptr_num02�� ����Ű�� �ִ� �ּҰ��� 0x18cff998�Դϴ�.
		������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� 1234�Դϴ�.
		������ ptr_num02�� ����Ű�� �ִ� �ּҿ� ����� ���� 3.140000�Դϴ�.
		*/
		/*
		
		*/