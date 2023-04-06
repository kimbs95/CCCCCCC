#include <stdio.h>


int main(void) {
	// 형변환
	int a = 20, b = 3; 
	double c = 3.4;
	double res;

	res = ((double)a) / ((double)b);
	printf("a =%d , b =%d\n", a, b);
	printf("a/b 의 결과는 %.1lf\n",res);

	a = (int)res;
	printf("(int) %.1lf 의 결과 : %d ", res, a);

	
	printf("###############################\n");
	printf("###############################\n");
	printf("###############################\n");
	printf("###############################\n");
	printf("###############################\n");
	// sizeof


	printf("int 형 변수의 크기 : %d\n", sizeof(int));
	printf("double 형 변수의 크기 : %d\n", sizeof(double));
	printf("정수형 변수의 크기 %d\n", sizeof(10));
	printf("실수형 변수의 크기 %d\n", sizeof(3.4));
	printf("수식의 변수 크기 %d \n", sizeof(1 < 2 < 3));
	printf("수식의 변수 크기 %d \n", sizeof(1.5 + 3.4));
	printf("char형 의 변수크기% d\n", sizeof(char));
	printf("문자형 변수의 크기 %d\n", sizeof("안"));

	//sizeof 괄호 안닫고 

	printf("sizeof안닫고 %d \n", sizeof 1.3 +(2.3) );
	printf("sizeof안닫고 %d \n", sizeof 3);


	// 콤마연산자
	int result;
	result = (++a, ++b);
	printf("result 의 최종값 : %d\n", result);
	result = ++a, ++b;

	int d = 4;
	int e = 3;
	int	response = (++d, ++e);
	printf("response 의 최종값 : %d\n", response);
	

	char compony[20] = "갤럭시";
	char chiken[30] = "비비큐";

	printf("치킨집 %s\n", chiken);
	printf("핸드폰  맛집 : %s\n", compony);
	printf("compony %u바이트\n", sizeof compony);
	printf("치킨집 %u바이트\n", sizeof(chiken));
	int hi;
	scanf("%d", &hi);
	printf("hi의 값 :%d\n", hi);
	char z[15];
	scanf_s("%s",z ,sizeof(z) );
	printf("z의 값 %s\n", z);


	printf("kbs 의 값 %d\n", kbs());

	return 0;
}


int kbs(void) {
	return 3;
}