#include <stdio.h>



int main(void){
	int a = 10 , b = 20 , c = 30;
	int d;

	d = b < a < c;
	printf("d 의 값은 %d  이다 ", d);


	int aa, bb, cc;
	printf("aa :");
	scanf("%d", &aa);
	printf("bb : ");
	scanf("%d", &bb);
	printf("cc : ");
	scanf("%d", &cc);

	char you[20];
	printf("이름은 :");
	scanf_s("%s", you, sizeof(you));
	printf("이름 : %s 최종 :%d ", you, aa < bb < cc);

	return 0; 
}