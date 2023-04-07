#include <stdio.h>


int sum(int a, int b); /* {


	return a + b;
};*/
sum(a, b) {
	return a + b;
}

int main(void) {

	int a = 10, b = 20;
	int result;
	result = sum(a, b);
	printf("a : %d , b : %d\n", a, b);

	printf("result : %d \n", result);
	printf("%u\n", &a);

	printf("%d\n", 10 < 20 < 15);//1
	printf("%d\n", 10 < 20 < 0);//0

	int c;
	int d;

	scanf("%d%d", &c, &d);

	printf("마이너스 %d\n", minus(c, d));
	int res = plus();
	printf("플러스 %d\n", res);

	return 0;
}

int minus(c,d) {
	int min = c - d;

	return min;
}

int plus(void) {
	int a;
	
	scanf("%d\n",&a );
	int result = a ;
	return result;
}
