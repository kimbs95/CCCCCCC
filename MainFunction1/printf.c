#include <stdio.h>



/* �ۼ��� : �躴��
	����: 10 �� 20 �� ���ϴ� ���α׷� */


int main(void) {
	10 + 20;

	printf("Be\a Happy \n");
	printf("123456789 \n");
	printf(" My\tFriend");
	printf("Goot\bd\tchance\n"); // \b ��ĭ �������� �̵��� :d" �κ���
	printf("Cow\rW\n\a\n");  // \r �Ǿ����� �̵��� "W" �� ����     \a �� ������� ��Ÿ��
	
	//   %d ���� , %lf �Ǽ� 
	printf("%d\n", 10); // %d ��ġ�� 10 ���
	printf("%lf\n", 3.4);// %lf ��ġ�� 3.4 �� �Ҽ��� ���� 6�ڸ����� ���
	printf("%.1lf\n", 3.45); // �Ҽ��� ���� ù° �ڸ����� ��� 
	printf("%.10lf\n", 3.4); // �Ҽ��� ���� 10�ڸ����� ���

	printf("%d�� %d �� ���� %d �Դϴ�.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	printf("#########################\n");
	printf("Beaaaaaa\rHappy!\nBaby");   // �������� �� ������ �������°� �ƴϰ� �ϳ��� ���̴°�




	
	return 0;
}