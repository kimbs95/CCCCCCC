#include <stdio.h>

void swap(int* pa, int* pb);

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
	/*
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

	*/
	printf("##########################\n");
	printf("##########################\n");
	printf("##########################\n");

	// sizeof �ּҿ� �������� ũ�� Ȯ�� 

	char ch;
	printf("char �� ������ �ּ�ũ�� : %u\n", sizeof(ch));
	int in;
	double db  ;
	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;
	printf("char �� ������ �ּ�ũ�� : %u\n", sizeof(&ch));	//8
	printf("int �� ������ �ּ�ũ�� : %u\n", sizeof(&in));	//8
	printf("double �� ������ �ּ�ũ�� : %u\n", sizeof(&pd));	//8
	
	printf("char * �������� ũ��: %d\n", sizeof(pc));	//8
	printf("int * �������� ũ��: %d\n", sizeof(pi));	//8
	printf("double * �������� ũ��: %d\n", sizeof(pd));	//8


	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
	printf("int* �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));


	

	/*
	int* p; // ������ ����
	p = (int*)100; //�ּҿ� 100 ���� 
	

	// ���� ���� ��� ���� ��

	int* z;
	z = 100;
	*/


	/* ���� �ȵ� ����3 �� �������� �ʰ� �޸� �Ƴ��� 3�� ����Ҽ��ִ°ǰ� ? 
	double kk1 = 3.4;
	double* bb1 = &kk1;
	int* ss3;
	ss3 = (int*)kk1;
	printf("ex �� �� : %lf\n", kk1);
	printf("ex2 �� �� : %u\n", *ss3);
	*/


	// �����͸� ���� �� ������ �� ��ȯ 
	printf("�����͸� ���� �� ������ �� ��ȯ \n");

	int a = 10, b = 20;
	swap(&a, &b);
	printf("a:%d , b:%d	\n",a,b );

	return 0;
}

void swap(int* pa, int* pb) {
	int temp;
	temp = *pa;

	*pa = *pb;
	*pb = temp;

}