#include <stdio.h>
int main(void)
{
	//1��
	int x, y, z, max, min;
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &x, &y, &z);
	max = (x > y) ? x : y;
	max = (max > z) ? max : z;
	min = (x < y) ? x : y;
	min = (min < z) ? min : z;
	printf("�ִ밪: %d, �ּҰ�: %d\n\n", max, min);

	//2��
	printf("3*8/4= %d\n\n", (3 << 3)>>2);
	
	//3��
	int value;
	printf("���� �Է�: ");
	scanf_s("%d", &value);
	value = ~value;
	value += 0x1;
	printf("��ȣ�� �ٲ� ���: %d \n", value);


	return 0;
}

/*���� ��� ���
3���� ������ �Է��Ͻÿ�: 12 33 54
�ִ밪: 54, �ּҰ�: 12

3*8/4= 6

���� �Է�: 5
��ȣ�� �ٲ� ���: -5
����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .
*/
/*���� ��� ���
3���� ������ �Է��Ͻÿ�: 12 33 54
�ִ밪: 54, �ּҰ�: 12

3*8/4= 6

���� �Է�: 5
��ȣ�� �ٲ� ���: -5
����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .
*/