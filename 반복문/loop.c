
#include <stdio.h>
#include <string.h>



int main(void) {
	// 연습 
	int a;
	char b[20] = "바나나";

	strcpy(b, "딸기");
	printf("%s\n", b);


	scanf("%d", &a);

	switch (a) {
	case 1: printf("1번 선택\n");
		break;	
	case 2: printf("2번 선택\n");
		break;
	case 3: printf("3번 선택\n");
		break;
	default:printf("아무것도 선택안됨\n");
	}
	
	for (int i = 1; i < 3; i++) {
		printf("시작이다 %d\n", i);
		while (i) {
			printf("while %d\n", i);
			goto c;
			printf("c 밑에 출력되니?\n");
		}
	}

	c:printf("label C\n");
	return 0;
}