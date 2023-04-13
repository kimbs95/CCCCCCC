//문자열 을 배열로 저장할때에는 최소 문자열길이+1 여유 가져야한다
//맨끝에 null 값이 들어가기때문에
#include <stdio.h>
#include <string.h>

int main() {
	// gets , puts  문자열 입출력 ;
	//scanf 는 띄어쓰기를 하면 null 값이 공백에 들어가 그 앞에까지만 나온다

	char pop[2][20] = { "KBS2","LKE2" };
	puts(pop[0]);
	
	char aa[80];
	printf("gets 문자열을 입력하세요 \n");
	gets(aa);
	puts("puts 입력된 문자열\n");
	puts(aa);


	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");


	char zz[30]="안녕하세요";
	printf("char 문자열 TEST\n");
	//scanf("%s", zz);
	//printf("zz 의 scanf 의 값 : %s \n", zz);
	strcpy(zz, "안녕");
	printf("zz 의 strcpy 의 값 : %s \n", zz);
	gets(zz);
	printf("zz 의 gets 의 값 : %s \n", zz);
	
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");

	///
	char str[80] = "applejam";

	printf("최초 문자열: %s\n", str);
	printf("문자열 입력: \n");
	scanf("%s", str, sizeof(str));
	printf("입력 후 문자열 : %s\n", str);



	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");


	//문자상수 하나씩 초기화
	char str1[20] = { 'a','b' };
	//문자열상수 한번에 초기화
	char str2[80] = "apple";
	printf("문자상수 하나씩 초기화 문자열 %s \n ", str1);
	printf("문자상수 하나씩 초기화 char 형 %c \n ", str1);


	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");
	printf("###########################\n");


	// 초기화가 되어있지 않은상태에서 값을 변경하려면 

	// 마지막 문자열에는 '\0' 널값을 넣어줘야한다.

	char a[20];
	// char 형 은 한글이 깨짐 영문만 .!
	a[0] = 'C';
	a[1] = 'D';
	printf("a 의 값 Null 을 안넣은거: %s\n", a);
	a[2] = '\0';
	printf("a 의 값 Null 을 넣은거 : %s\n", a);
	

	char b[20] = "반가워요";
	printf("문자열 변경 하기 \n");
	printf("문자열 b =%s\n",b);
	strcpy(b, "안녕하세요");
	printf("%s\n", b);

	

	return 0;
}
