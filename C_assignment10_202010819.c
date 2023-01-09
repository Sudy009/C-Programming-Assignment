#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1�� �Լ� ����
int get_gcd(int n1, int n2)
{
	int i;
	for (i = n1 >= n2 ? n2 : n1; i > 1; i--)
	{//�Ʒ��� �ϼ��Ͻÿ�
		if (n1 % i == 0 && n2 % i == 0) {
			return i;
		}
	}

}
//2�� �Լ� ����
int get_n(int n)
{
	int k = 0, result = 1;
	//�Ʒ��� �ϼ��Ͻÿ�
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
////3�� �Լ� ����
const int BREAD = 500;    
const int SNACK = 700;    
const int DRINK = 400;    

void get_cases(int money)
{
	int i, j, k;

	for (int j = 1; j < money / BREAD; j++)
	{//�Ʒ��� �ϼ��Ͻÿ�
		for (i = 1; i < money / SNACK; i++) {

			for (int k = 1; k < money / DRINK; k++)
			{
				if (i * 700 + j * 500 + k * 400 == 3500)
				{
					printf("ũ���� %d��, ����� %d��, �� �� %d��\n", j, i, k);
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

	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &n1, &n2);
	printf("�� ���� �ִ����� : %d\n\n", get_gcd(n1, n2));

	//2��
	int n;

	printf("��� n �Է�: ");
	scanf_s("%d", &n);
	printf("������ �����ϴ� k�� �ִ��� %d\n\n", get_n(n));

	////3��
	int money = 3500;

	printf("���� �����ϰ� �ִ� �ݾ�: %d\n", money);
	get_cases(money);

	return 0;
}

/*���� ��� ���
�� ���� ���� �Է� : 6 9
�� ���� �ִ����� : 3

��� n �Է�: 256
������ �����ϴ� k�� �ִ��� 8

���� �����ϰ� �ִ� �ݾ�: 3500
ũ���� 1��, ����� 2��, �� �� 4��
ũ���� 2��, ����� 3��, �� �� 1��
ũ���� 4��, ����� 1��, �� �� 2��
����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .
*/
/*���� ��� ���
�� ���� ���� �Է� : 6 9
�� ���� �ִ����� : 3

��� n �Է�: 256
������ �����ϴ� k�� �ִ��� 8

���� �����ϰ� �ִ� �ݾ�: 3500
ũ���� 1��, ����� 2��, ��  �� 4��
ũ���� 2��, ����� 3��, ��  �� 1��
ũ���� 4��, ����� 1��, ��  �� 2��
����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .
*/
