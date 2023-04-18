#include <stdio.h>


int main() {
	// 문자열 두개 
	/*
	char pop[2][20] = { "KBS","LKE" };
	puts(pop[0]);

	char* kbs[] = { "KKK","BBB","SSS" };
	puts(kbs[0]);
	*/

	/*
	int a; 
	double b; 
	char c;
	printf("int형 변수의 주소 %u\n", &a);
	printf("double형 변수의 주소 %u\n", &b);
	printf("char형 변수의 주소 %u\n", &c);
	printf("%u 바이트\n",sizeof(c));
	printf("%p \n ", &a); // 주소값 16진수 
	*/

	/* 포인터 사용법
	int a;				// 변수 선언
	int* pa;			// 포인터 선언

	pa = &a;			// 포인터에 a의 주소 대입 
	*pa = 10;			// 포인터로 변수 a 에 10 대입   포인터가 가르키는 변수 가 있을때는 * 을 사용 
	printf("포인터로 a값 출력 %u \n", *pa);
	printf("변수명으로 a값 출력 %u \n", a);
	printf("포인터의 변수의 주소 %u\n", &*pa);

	int k;

	int* pk;
	pk = &k;
	*pk = 14;
	printf("pk포인터 k 변수를 가르킨다 .%u \n", k);

	
	scanf("%d", &a);
	scanf("%d", pa);
	 */

	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;
	const int *c = &a;				// pointer 를 *c 통하여 a 를 변경할수없다 . a 변수는 가능

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;  //30 
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d , %d \n", *pa, *pb);
	printf("두 정수의 합 : %d \n", *pt);

	printf("변수 a 값 : %d\n", *c);
	c = &b;
	printf("변수 b 값 : %d\n", *c);
	c = &a;
	a = 20;				
	printf("변수 a 값 : %d\n", *c);



	return 0;
}