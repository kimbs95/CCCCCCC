#include <stdio.h>



int main(void){
	int a = 10 , b = 20 , c = 30;
	int d;

	d = b < a < c;
	printf("d �� ���� %d  �̴� ", d);


	int aa, bb, cc;
	printf("aa :");
	scanf("%d", &aa);
	printf("bb : ");
	scanf("%d", &bb);
	printf("cc : ");
	scanf("%d", &cc);

	char you[20];
	printf("�̸��� :");
	scanf_s("%s", you, sizeof(you));
	printf("�̸� : %s ���� :%d ", you, aa < bb < cc);

	return 0; 
}