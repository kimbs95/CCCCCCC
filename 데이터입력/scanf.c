#include <stdio.h>


int main(void) {


	/*int a =3 ; 
	scanf("%d", &a);
	printf("�Էµ� �� : %d\n", a);


	int age ; 
	double height;

	printf("���� �� Ű�� �Է��ϼ��� :");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d ���̰� Ű�� %.1lf �Դϴ�.\n", age, height);*/

	char grade; 

	char name[20];

	scanf_s("%c", &grade);

	printf("%c�� �ƽ�Ű �ڵ� %d�̴�", grade, grade);



	scanf_s("%s", name,sizeof(name));
	printf("�̸� : %s " ,name);
	/*printf("���� �Է� : ");
	scanf("%c", &grade);

	printf("�̸� �Է� :");	
	scanf("%s ", name);

	printf("������ %c �̸��� %s", grade, name);
	*/


	return 0;
}