
#include <stdio.h>
#include <string.h>



int main(void) {
	// ���� 
	int a;
	char b[20] = "�ٳ���";

	strcpy(b, "����");
	printf("%s\n", b);


	scanf("%d", &a);

	switch (a) {
	case 1: printf("1�� ����\n");
		break;	
	case 2: printf("2�� ����\n");
		break;
	case 3: printf("3�� ����\n");
		break;
	default:printf("�ƹ��͵� ���þȵ�\n");
	}
	
	for (int i = 1; i < 3; i++) {
		printf("�����̴� %d\n", i);
		while (i) {
			printf("while %d\n", i);
			goto c;
			printf("c �ؿ� ��µǴ�?\n");
		}
	}

	c:printf("label C\n");
	return 0;
}