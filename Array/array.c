#include <stdio.h>

int main(void) {

	printf("%lf", (double)5);
	// 반복문을 통하여 초기화

	int score[5];
	int i;
	int total =0 ;
	double avg;
	printf("%d\n", sizeof(score)/sizeof(int));
	for (i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++) {
		printf("%d 의값 :%d \n", i, score[i]);
		printf("%d 의값 :%5d \n", i, score[i]);
		total += score[i];
	}
	avg = total / 5.0;
	printf("%lf", avg);


	int ary[5];
	int arr[2] = { 1,2 };
	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	printf("%d\n", ary[0]);
	printf("%d\n", ary[1]);
	printf("%d\n", ary[2]);
	// scanf("%d", &ary[4]);
	printf("%d\n", ary[3]);
	printf("4 %d\n", ary[4]);
	printf("%d \n", sizeof(ary));

	printf("ary : %d", arr[0]);
	printf("ary : %d", arr[1]);

	printf("\n");

	int a[5] ;
	printf("a : 시작 \n");
	printf("a : %d \n", a);
	printf("a : %d \n", a[0]);
	a[0] = 2;
	printf("a : %d \n", a[0]);
	printf("a 끝 : %d \n", a[1]);

	int b[5] = { 1,2,3 };
	printf("b : %d \n", b);
	printf("b : %d \n", b[0]);
	printf("b : %d \n", b[0]);
	printf("b : %d \n", b[1]);
	printf("b : %d \n", b[3]);


	int c[2] = { 1 };
	printf("c: %d \n", c[0]);
	printf("c: %d \n", c[1]);

	int d[] = { 1,2,3 };
	printf("d: %d\n", d[0]);
	printf("d: %d\n", d[1]);
	printf("d: %d\n", d[2]);

	double arr1[2] = { 0.1 };
	printf("arr1 : %lf \n", arr1[0]);
	printf("arr1 : %lf \n", arr1[1]);

	char cha[3] = { 'd','s' };
	printf("char %c \n", cha[0]);
	printf("char %c \n", cha[1]);
	printf("char %c \n", cha[2]);

	char char1[20] = "char안녕" ;
	printf("문자열 %s", char1);

	return 0;

}