#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	

	int a;
	int b, c;
	double da; 
	char ch;

	a = 10;
	b = 1;
	c = a + 20;

	da = 3.5;
	ch = 'A';

	printf("변수 a 의 값 : %d\n ",a);
	printf("변수 b 의 값 : %d\n	", b);
	printf("변수 c 의 값 : %d\n", c);  // int 형 변수 c 에 정수 a 값과 정수 20 을 더한 값 대입
	printf("변수 da 의 값 : %.1lf\n", da); // double 형 변수 da 에 실수 3.5 대입
	printf("변수 ch 의 값 : %c\n", ch);  // char형 변수 ch 메 문자 'A' 를 대입


	// ############################ char 형  %c
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");

	char ch1 = 'A';
	char ch2 = 65;

	printf("문자 %c 의 아스키 모든 값 : %d\n", ch1, ch1);
	printf("아스키코드 값이 %d 의 아스키 모든 값 : %c\n", ch2, ch2);


	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;



	printf("short형 변수 출력 :%d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("logn long형 변수 출력 : %lld\n ", lln);

	printf("long long 형의 크기 : %d 바이트\n", sizeof(long long)); // byte 크기를 알수있음 sizeof 



	// 정수 자료형 
	// 
	// 
	//정수형이 양수 만 일때 사용하면 두배 더넓은 범위의값을 저장할수 있음 
	// unsigned

	// unsigned 를 사용하여 큰 양수를 저장하고 출력시 음수 가 출력될수있다
	// 음수를 저장하고 u%로 출력하면 된다.
	// u% 부호 없이 10진수 정수만 출력
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");

	unsigned int aa; 
	aa = 4294967295;
	printf("%d\n", aa);
	printf("음수를 선언 안하고 사용 ? : %u\n", aa);
	aa = -1;
	printf("%u\n", aa);


	// 실수 자료형
	//
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");

	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;
	printf("float형 변수의 값 : %.20f\n", ft);  //7자리
	printf("double형 변수의 값 : %.20lf\n", db); //15자리
	printf("long double 형은 %d 바이트 \n", sizeof(long double));

	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");


	// 문자열 저장 & 문자열변경

	char fruit[20] = "strawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n", fruit, "jam");

	strcpy(fruit, "banana"); // strcpy 문자열 copy
	printf("%s \n", fruit);




	// 문자열 상수   %s


	int income = 0;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다. \n", tax);


	system("pause");
	return 0;

}