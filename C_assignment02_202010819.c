#include <stdio.h>
#include <math.h>

int main(void) {
	//1��
	int korean=0, english=0, math=0;
	printf("1. ���� ���� : ");
	scanf_s("%d", &korean);
	printf("2. ���� ���� : ");
	scanf_s("%d", &english);
	printf("3. ���� ���� : ");
	scanf_s("%d", &math);

	int total = korean + english + math;
	double average = (double)total / 3;
	printf("���� : %d\n", total);
	printf("��� ���� : %.2lf\n\n", average);
	
	//2��
	int num1, num2, triple;
	double division;

	printf("2�� ������ �Է� : ");
	scanf_s("%d %d", &num1, &num2);
	triple = pow(num1, 3);
	division = (double)num1 / (double)num2;

	printf("������ ���� ��� : [ %d * %d * %d = %d ]\n", num1, num1, num1, triple);
	printf("������ ���� ��� : [ %d / %d = %.3lf ]\n", num1, num2, division);
	return 0;
}