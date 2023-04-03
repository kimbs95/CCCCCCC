#include <stdio.h>


int main(void) {
	printf("%d\n", 12);  // 10진수 
	printf("%d\n", 014); // 8진수
	printf("%d\n", 0xc); // 16진수
	printf("\n");
	printf("%o\n", 12); // 10진수 => 8진수
	printf("%x\n", 12); // 10진수 => 16진수
	printf("%X\n", 12);

	printf("\n");
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c 은 %s 입니다.\n", '1', "first");



	return 0;
}