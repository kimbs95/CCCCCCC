#include <stdio.h>


int main(void) {


	/*int a =3 ; 
	scanf("%d", &a);
	printf("입력된 값 : %d\n", a);


	int age ; 
	double height;

	printf("나이 와 키를 입력하세요 :");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d 살이고 키는 %.1lf 입니다.\n", age, height);*/

	char grade; 

	char name[20];

	scanf_s("%c", &grade);

	printf("%c는 아스키 코드 %d이다", grade, grade);



	scanf_s("%s", name,sizeof(name));
	printf("이름 : %s " ,name);
	/*printf("학점 입력 : ");
	scanf("%c", &grade);

	printf("이름 입력 :");	
	scanf("%s ", name);

	printf("학점은 %c 이름은 %s", grade, name);
	*/


	return 0;
}