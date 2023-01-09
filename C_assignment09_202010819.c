#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int iterative(int n1, int n2)
{
	//아래를 완성하시오
	int result = 1;
	for (int i = 1; i <= n2; i++) {  
		result = result * n1;        
	}

	return result;
}
int recursive(int n1, int n2)
{
	//아래를 완성하시오
	if (n2 <= 0) {
		return 1;
	}
	else {
		return(n1 * pow(n1, n2 - 1));
	}

}

//아래를 완성하시오, 전역 변수와 외부연결 함수 선언
int op=0;
extern int add();

int main(void)
{
	//1, 2번
	int n;

	printf("2의 승수 입력: ");
	scanf_s("%d", &n);
	printf("반복: 2의 %d승은 %d\n", n, iterative(2, n));
	printf("순환: 2의 %d승은 %d\n", n, recursive(2, n));

	//3번
	for (int i = 0; i < 3; i++)
	{
		printf("정수 입력: ");
		scanf_s("%d", &op);
		printf("합: %d\n", add());
	}

	return 0;
}

/*실제 출력 결과
2의 승수 입력: 8
반복: 2의 8승은 256
순환: 2의 8승은 256
정수 입력: 3
합: 3
정수 입력: 5
합: 8
정수 입력: 7
합: 15
계속하려면 아무 키나 누르십시오 . . .
*/
/*예시 출력 결과
2의 승수 입력: 8
반복: 2의 8승은 256
순환: 2의 8승은 256
정수 입력: 3
합: 3
정수 입력: 5
합: 8
정수 입력: 7
합: 15
계속하려면 아무 키나 누르십시오 . . .
*/
