#include <stdio.h>


int main(void) {
	printf("%d\n", 12);  // 10���� 
	printf("%d\n", 014); // 8����
	printf("%d\n", 0xc); // 16����
	printf("\n");
	printf("%o\n", 12); // 10���� => 8����
	printf("%x\n", 12); // 10���� => 16����
	printf("%X\n", 12);

	printf("\n");
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c �� %s �Դϴ�.\n", '1', "first");



	return 0;
}