#include <stdio.h>
int main(void) {
	//1��
	int num1, num2, num3, num4 = 0;
	printf("1. �»���� (x,y) ��ǥ : ");
	scanf_s("%d %d", &num1, &num2);
	printf("2. ������ (x,y) ��ǥ : ");
	scanf_s("%d %d", &num3, &num4);
	
	int total = (num3 - num1) * (num4 - num2);
	printf("���� : %d\n\n", total);

	//2��
	char ch;
	printf("���� �Է� : ");
	scanf_s(" %c", &ch);
	if (('a' <= ch) && (ch <= 'z')){
		printf("�빮�� ��ȯ : %c\n\n", ch-32);
	}
	else if(('a' <= ch) || (ch <= 'z')){
		printf("�빮�� ��ȯ : %c\n\n", ch);
	}

	//3��
	int num;
	int list[3];
	printf("���ڸ� ���� ���� �Է� : ");
	scanf_s("%d", &num);

	list[0] = (num % 1000) / 100;  //���� �ڸ���
	list[1] = (num % 100) / 10;    //���� �ڸ���
	list[2] = (num % 10);          //���� �ڸ���
	printf("���� �ڸ�: %d\n", list[2]);
	printf("���� �ڸ�: %d\n", list[1]);
	printf("���� �ڸ�: %d\n\n", list[0]);
	return 0;
}

/*�������
1. �»���� (x,y) ��ǥ : 2 4
2. ������ (x,y) ��ǥ : 4 8
���� : 8

���� �Է� : b
�빮�� ��ȯ : B

���ڸ� ���� ���� �Է� : 357
���� �ڸ�: 7
���� �ڸ�: 5
���� �ڸ�: 3

����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .
*/