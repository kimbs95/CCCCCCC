#include <stdio.h>


int main(void) {
	// ����ȯ
	int a = 20, b = 3; 
	double c = 3.4;
	double res;

	res = ((double)a) / ((double)b);
	printf("a =%d , b =%d\n", a, b);
	printf("a/b �� ����� %.1lf\n",res);

	a = (int)res;
	printf("(int) %.1lf �� ��� : %d ", res, a);

	
	printf("###############################\n");
	printf("###############################\n");
	printf("###############################\n");
	printf("###############################\n");
	printf("###############################\n");
	// sizeof


	printf("int �� ������ ũ�� : %d\n", sizeof(int));
	printf("double �� ������ ũ�� : %d\n", sizeof(double));
	printf("������ ������ ũ�� %d\n", sizeof(10));
	printf("�Ǽ��� ������ ũ�� %d\n", sizeof(3.4));
	printf("������ ���� ũ�� %d \n", sizeof(1 < 2 < 3));
	printf("������ ���� ũ�� %d \n", sizeof(1.5 + 3.4));
	printf("char�� �� ����ũ��% d\n", sizeof(char));
	printf("������ ������ ũ�� %d\n", sizeof("��"));

	//sizeof ��ȣ �ȴݰ� 

	printf("sizeof�ȴݰ� %d \n", sizeof 1.3 +(2.3) );
	printf("sizeof�ȴݰ� %d \n", sizeof 3);


	// �޸�������
	int result;
	result = (++a, ++b);
	printf("result �� ������ : %d\n", result);
	result = ++a, ++b;

	int d = 4;
	int e = 3;
	int	response = (++d, ++e);
	printf("response �� ������ : %d\n", response);
	

	char compony[20] = "������";
	char chiken[30] = "���ť";

	printf("ġŲ�� %s\n", chiken);
	printf("�ڵ���  ���� : %s\n", compony);
	printf("compony %u����Ʈ\n", sizeof compony);
	printf("ġŲ�� %u����Ʈ\n", sizeof(chiken));
	int hi;
	scanf("%d", &hi);
	printf("hi�� �� :%d\n", hi);
	char z[15];
	scanf_s("%s",z ,sizeof(z) );
	printf("z�� �� %s\n", z);


	printf("kbs �� �� %d\n", kbs());

	return 0;
}


int kbs(void) {
	return 3;
}