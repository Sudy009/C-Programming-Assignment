#include <stdio.h>
#include <math.h>

int main(void) {
	//1번
	int korean=0, english=0, math=0;
	printf("1. 국어 점수 : ");
	scanf_s("%d", &korean);
	printf("2. 영어 점수 : ");
	scanf_s("%d", &english);
	printf("3. 수학 점수 : ");
	scanf_s("%d", &math);

	int total = korean + english + math;
	double average = (double)total / 3;
	printf("총점 : %d\n", total);
	printf("평균 점수 : %.2lf\n\n", average);
	
	//2번
	int num1, num2, triple;
	double division;

	printf("2개 정수값 입력 : ");
	scanf_s("%d %d", &num1, &num2);
	triple = pow(num1, 3);
	division = (double)num1 / (double)num2;

	printf("세제곱 연산 결과 : [ %d * %d * %d = %d ]\n", num1, num1, num1, triple);
	printf("나눗셈 연산 결과 : [ %d / %d = %.3lf ]\n", num1, num2, division);
	return 0;
}