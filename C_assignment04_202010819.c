#include <stdio.h>
int main(void)
{
	//1번
	int x, y, z, max, min;
	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &x, &y, &z);
	max = (x > y) ? x : y;
	max = (max > z) ? max : z;
	min = (x < y) ? x : y;
	min = (min < z) ? min : z;
	printf("최대값: %d, 최소값: %d\n\n", max, min);

	//2번
	printf("3*8/4= %d\n\n", (3 << 3)>>2);
	
	//3번
	int value;
	printf("정수 입력: ");
	scanf_s("%d", &value);
	value = ~value;
	value += 0x1;
	printf("부호를 바꾼 결과: %d \n", value);


	return 0;
}

/*실제 출력 결과
3개의 정수를 입력하시오: 12 33 54
최대값: 54, 최소값: 12

3*8/4= 6

정수 입력: 5
부호를 바꾼 결과: -5
계속하려면 아무 키나 누르십시오 . . .
*/
/*예시 출력 결과
3개의 정수를 입력하시오: 12 33 54
최대값: 54, 최소값: 12

3*8/4= 6

정수 입력: 5
부호를 바꾼 결과: -5
계속하려면 아무 키나 누르십시오 . . .
*/