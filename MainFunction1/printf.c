#include <stdio.h>



/* 작성자 : 김병성
	제목: 10 과 20 을 더하는 프로그램 */


int main(void) {
	10 + 20;

	printf("Be\a Happy \n");
	printf("123456789 \n");
	printf(" My\tFriend");
	printf("Goot\bd\tchance\n"); // \b 한칸 왼쪽으로 이동후 :d" 로변경
	printf("Cow\rW\n\a\n");  // \r 맨앞으로 이동해 "W" 로 변경     \a 는 경고음을 나타냄
	
	//   %d 정수 , %lf 실수 
	printf("%d\n", 10); // %d 위치에 10 출력
	printf("%lf\n", 3.4);// %lf 위치에 3.4 를 소수점 이하 6자리까지 출력
	printf("%.1lf\n", 3.45); // 소수점 이하 첫째 자리까지 출력 
	printf("%.10lf\n", 3.4); // 소수점 이하 10자리까지 출력

	printf("%d과 %d 의 합은 %d 입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	printf("#########################\n");
	printf("Beaaaaaa\rHappy!\nBaby");   // 지워지는 거 같은데 지워지는게 아니고 하나씩 덮이는것




	
	return 0;
}