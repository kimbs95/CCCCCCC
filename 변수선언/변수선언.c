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

	printf("���� a �� �� : %d\n ",a);
	printf("���� b �� �� : %d\n	", b);
	printf("���� c �� �� : %d\n", c);  // int �� ���� c �� ���� a ���� ���� 20 �� ���� �� ����
	printf("���� da �� �� : %.1lf\n", da); // double �� ���� da �� �Ǽ� 3.5 ����
	printf("���� ch �� �� : %c\n", ch);  // char�� ���� ch �� ���� 'A' �� ����


	// ############################ char ��  %c
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");

	char ch1 = 'A';
	char ch2 = 65;

	printf("���� %c �� �ƽ�Ű ��� �� : %d\n", ch1, ch1);
	printf("�ƽ�Ű�ڵ� ���� %d �� �ƽ�Ű ��� �� : %c\n", ch2, ch2);


	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;



	printf("short�� ���� ��� :%d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %ld\n", ln);
	printf("logn long�� ���� ��� : %lld\n ", lln);

	printf("long long ���� ũ�� : %d ����Ʈ\n", sizeof(long long)); // byte ũ�⸦ �˼����� sizeof 



	// ���� �ڷ��� 
	// 
	// 
	//�������� ��� �� �϶� ����ϸ� �ι� ������ �����ǰ��� �����Ҽ� ���� 
	// unsigned

	// unsigned �� ����Ͽ� ū ����� �����ϰ� ��½� ���� �� ��µɼ��ִ�
	// ������ �����ϰ� u%�� ����ϸ� �ȴ�.
	// u% ��ȣ ���� 10���� ������ ���
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");

	unsigned int aa; 
	aa = 4294967295;
	printf("%d\n", aa);
	printf("������ ���� ���ϰ� ��� ? : %u\n", aa);
	aa = -1;
	printf("%u\n", aa);


	// �Ǽ� �ڷ���
	//
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");

	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;
	printf("float�� ������ �� : %.20f\n", ft);  //7�ڸ�
	printf("double�� ������ �� : %.20lf\n", db); //15�ڸ�
	printf("long double ���� %d ����Ʈ \n", sizeof(long double));

	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");


	// ���ڿ� ���� & ���ڿ�����

	char fruit[20] = "strawberry";

	printf("���� : %s\n", fruit);
	printf("����´ : %s %s\n", fruit, "jam");

	strcpy(fruit, "banana"); // strcpy ���ڿ� copy
	printf("%s \n", fruit);




	// ���ڿ� ���   %s


	int income = 0;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�. \n", tax);


	system("pause");
	return 0;

}