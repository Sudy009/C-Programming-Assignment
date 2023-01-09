#include <stdio.h>
int main(void) {
	//1번
	int num1, num2, num3, num4 = 0;
	printf("1. 좌상단의 (x,y) 좌표 : ");
	scanf_s("%d %d", &num1, &num2);
	printf("2. 우상단의 (x,y) 좌표 : ");
	scanf_s("%d %d", &num3, &num4);
	
	int total = (num3 - num1) * (num4 - num2);
	printf("넓이 : %d\n\n", total);

	//2번
	char ch;
	printf("문자 입력 : ");
	scanf_s(" %c", &ch);
	if (('a' <= ch) && (ch <= 'z')){
		printf("대문자 변환 : %c\n\n", ch-32);
	}
	else if(('a' <= ch) || (ch <= 'z')){
		printf("대문자 변환 : %c\n\n", ch);
	}

	//3번
	int num;
	int list[3];
	printf("세자리 양의 정수 입력 : ");
	scanf_s("%d", &num);

	list[0] = (num % 1000) / 100;  //백의 자릿수
	list[1] = (num % 100) / 10;    //십의 자릿수
	list[2] = (num % 10);          //일의 자릿수
	printf("일의 자리: %d\n", list[2]);
	printf("십의 자리: %d\n", list[1]);
	printf("백의 자리: %d\n\n", list[0]);
	return 0;
}

/*실제출력
1. 좌상단의 (x,y) 좌표 : 2 4
2. 우상단의 (x,y) 좌표 : 4 8
넓이 : 8

문자 입력 : b
대문자 변환 : B

세자리 양의 정수 입력 : 357
일의 자리: 7
십의 자리: 5
백의 자리: 3

계속하려면 아무 키나 누르십시오 . . .
*/