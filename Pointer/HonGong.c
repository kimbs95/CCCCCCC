#include <stdio.h>


int main() {
	// ���ڿ� �ΰ� 
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
	printf("int�� ������ �ּ� %u\n", &a);
	printf("double�� ������ �ּ� %u\n", &b);
	printf("char�� ������ �ּ� %u\n", &c);
	printf("%u ����Ʈ\n",sizeof(c));
	printf("%p \n ", &a); // �ּҰ� 16���� 
	*/

	/* ������ ����
	int a;				// ���� ����
	int* pa;			// ������ ����

	pa = &a;			// �����Ϳ� a�� �ּ� ���� 
	*pa = 10;			// �����ͷ� ���� a �� 10 ����   �����Ͱ� ����Ű�� ���� �� �������� * �� ��� 
	printf("�����ͷ� a�� ��� %u \n", *pa);
	printf("���������� a�� ��� %u \n", a);
	printf("�������� ������ �ּ� %u\n", &*pa);

	int k;

	int* pk;
	pk = &k;
	*pk = 14;
	printf("pk������ k ������ ����Ų�� .%u \n", k);

	
	scanf("%d", &a);
	scanf("%d", pa);
	 */

	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;
	const int *c = &a;				// pointer �� *c ���Ͽ� a �� �����Ҽ����� . a ������ ����

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;  //30 
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d , %d \n", *pa, *pb);
	printf("�� ������ �� : %d \n", *pt);

	printf("���� a �� : %d\n", *c);
	c = &b;
	printf("���� b �� : %d\n", *c);
	c = &a;
	a = 20;				
	printf("���� a �� : %d\n", *c);



	return 0;
}