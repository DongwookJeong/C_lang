#include <stdio.h>
int percent(int r, int g, int b);

int main(){
	//float r= 234;
	//float g= 35;
	//float b= 123;
	float rgb;
	rgb = percent(200.0, 56.0, 123.0);
	//printf("%f\n", rgb);//21.0000 > 소수점은 나오지 않은 현상 
	return 0;
	
}
int percent(int r, int g, int b) {
	float rgb;
	rgb = r / 255.0 * 100.0;
	//rgb = g / 255 * 100;
	//rgb = b / 255 * 100;
	printf("뭐지%f\n", rgb);
	return rgb;
}
/*
* int main(){
	float r = 205;
	printf("%f이다.", r / 255 * 100);//78.431374이다.
	return r;
}
*/
/*
* int percent(int r);

int main() {
	int rgb;
	int r = 200;
	rgb = percent(r);
	printf("너는 누구냐? %f", rgb/255*100);
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
* 참조에 의한 전달(call by reference)
* void local(int*);

int main(void) {
	int var = 10;
	printf("변수 var의 초깃값은 %d입니다.\n", var);
	//변수 var의 초깃값은 10입니다.

	local(&var);
	printf("local() 함수 호출 후 변수 var의 값은 %d입니다.\n", var);
	//local() 함수 호출 후 변수 var의 값은 20입니다.
	return 0;
}
void local(int* num) {
	*num += 10;
}
*/

/*
* 값의 의한 전달(call by value)
* num의 값을 아무리 변경하더라도 원래 인수로 전달된 변수 var의 값은 절대 변경되지 않는다.
* void local(int);

int main() {
	int var = 10;
	printf("변수 var의 초깃값은 %d입니다.\n", var);
	//변수 var의 초깃값은 10입니다.

	local(var);
	printf("local() 함수 호출 후 변수 var의 값은 %d입니다.\n", var);
	//local() 함수 호출 후 변수 var의 값은 10입니다.
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
	//변수뿐만 아니라 함수 또한 C언어 포인터로 취급할 수 있다.
	return 0;
}
*/

/*
* 	int a = 1;
	int* ptr;

	ptr = &a;

	*ptr = 128;

	printf("%d\n", a);//128
	// a 주소 할당, 이 후 *ptr에 128이라는 값을 할당
	// 즉 a의 주소를 의미 *ptr를 통해 변수 a에 기록
*/

/*
* char a[8];//선언
	char* ptr;
	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = 'f';
	a[6] = 'g';
	a[7] = '\0';//공란 필요
	------------------------------------
	ptr = a;
	printf("%c\n", *ptr);
	ptr = ptr + 3;
	printf("%c\n", *ptr);
	// ptr = ptr + 3 => 주소 위치 이동
	------------------------------------
	ptr = a;
	*ptr = 'z';
	ptr += 3;
	*ptr = 'w';
	printf("%s\n", a);
	//zbcwefg a를 z로 바꾸고 4번째에 있는 d를 w로 바꿈
*/
/*
* ++ 증가
* char* ptr_char = 0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00;
	printf("포인터 ptr_char가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_char);
	printf("포인터 ptr_int가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_int);
	printf("포인터 ptr_double이 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_double);

	printf("포인터 ptr_char가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_char);
	printf("포인터 ptr_int가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_int);
	printf("포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_double);

*/
/*
* %#x 주소값, %d decimal, %f float
	int num01 = 1234;

	double num02 = 3.14;
	int* ptr_num01 = &num01;
	double* ptr_num02 = &num02;

	printf("포인터의 크기는 %d입니다.\n", sizeof(ptr_num01));
	printf("포인터 ptr_num01이 가리키고 있는 주소값은 %#x입니다.\n", ptr_num01);
	printf("포인터 ptr_num02이 가리키고 있는 주소값은 %#x입니다.\n", ptr_num02);
	printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
	printf("포인터 ptr_num02이 가리키고 있는 주소에 저장된 값은 %f입니다.\n", *ptr_num02);

		포인터의 크기는 8입니다.
		포인터 ptr_num01이 가리키고 있는 주소값은 0x18cff974입니다.
		포인터 ptr_num02이 가리키고 있는 주소값은 0x18cff998입니다.
		포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 1234입니다.
		포인터 ptr_num02이 가리키고 있는 주소에 저장된 값은 3.140000입니다.
		*/
		/*
		
		*/