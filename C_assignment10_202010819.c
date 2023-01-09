#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1번 함수 구현
int get_gcd(int n1, int n2)
{
	int i;
	for (i = n1 >= n2 ? n2 : n1; i > 1; i--)
	{//아래를 완성하시오
		if (n1 % i == 0 && n2 % i == 0) {
			return i;
		}
	}

}
//2번 함수 구현
int get_n(int n)
{
	int k = 0, result = 1;
	//아래를 완성하시오
	for (int i = 1; ; i++) {
		result = pow(2, i);
		if (result <= n) {
			k++;
		}
		else
			break;
	}
	return k;
}
////3번 함수 구현
const int BREAD = 500;    
const int SNACK = 700;    
const int DRINK = 400;    

void get_cases(int money)
{
	int i, j, k;

	for (int j = 1; j < money / BREAD; j++)
	{//아래를 완성하시오
		for (i = 1; i < money / SNACK; i++) {

			for (int k = 1; k < money / DRINK; k++)
			{
				if (i * 700 + j * 500 + k * 400 == 3500)
				{
					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", j, i, k);
				}
			}
		}
	}
	return 0;
}


	

int main(void)
{
	//1
	int n1, n2;

	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &n1, &n2);
	printf("두 수의 최대공약수 : %d\n\n", get_gcd(n1, n2));

	//2번
	int n;

	printf("상수 n 입력: ");
	scanf_s("%d", &n);
	printf("공식을 만족하는 k의 최댓값은 %d\n\n", get_n(n));

	////3번
	int money = 3500;

	printf("현재 소유하고 있는 금액: %d\n", money);
	get_cases(money);

	return 0;
}

/*실제 출력 결과
두 개의 정수 입력 : 6 9
두 수의 최대공약수 : 3

상수 n 입력: 256
공식을 만족하는 k의 최댓값은 8

현재 소유하고 있는 금액: 3500
크림빵 1개, 새우깡 2개, 콜 라 4개
크림빵 2개, 새우깡 3개, 콜 라 1개
크림빵 4개, 새우깡 1개, 콜 라 2개
계속하려면 아무 키나 누르십시오 . . .
*/
/*예시 출력 결과
두 개의 정수 입력 : 6 9
두 수의 최대공약수 : 3

상수 n 입력: 256
공식을 만족하는 k의 최댓값은 8

현재 소유하고 있는 금액: 3500
크림빵 1개, 새우깡 2개, 콜  라 4개
크림빵 2개, 새우깡 3개, 콜  라 1개
크림빵 4개, 새우깡 1개, 콜  라 2개
계속하려면 아무 키나 누르십시오 . . .
*/
