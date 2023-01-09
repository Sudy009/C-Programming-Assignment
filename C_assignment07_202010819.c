#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//2��
int max_num(int n1, int n2, int n3)
{
    //�Ʒ��� �ϼ��Ͻÿ�.
    int max;
    max = (n1 > n2) ? n1 : n2;
    max = (max > n3) ? max : n3;
    return max;
}
int min_num(int n1, int n2, int n3)
{
    //�Ʒ��� �ϼ��Ͻÿ�.
    int min;
    min = (n1 < n2) ? n1 : n2;
    min = (min < n3) ? min : n3;
    return min;
}

//3��
int is_prime(int n)
{
    //�Ʒ��� �ϼ��Ͻÿ�.
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

//4��
double f_rand(double d1, double d2)
{
    //�Ʒ��� �ϼ��Ͻÿ�.
    double randnum;

    randnum = (double)rand() / RAND_MAX * (d2 - d1) + d1;
    return randnum;
}

int main(void)
{
    //1��
    int cnt = 0;
    char ch;

    while (1)
    {
        //�Ʒ��� �ϼ��Ͻÿ�.
        cnt++;
        printf("���ĺ� �Է�: ");
        scanf_s(" %c", &ch, 1);

        if (ch == 'q' || ch == 'Q') {
            printf("�� %dȸ �����Ͽ� ���ĺ��� ã�ҽ��ϴ�.\n", cnt);
            printf("ã�� ���ĺ��� ��� ���� ���� ���� 'Q' �Դϴ�.\n");
            break;
        }
        else {
            printf("ã�� ���ĺ��� �ƴմϴ�. ���ĺ��� �ٽ� �Է��ϼ���...\n\n");
        }

    }
    printf("\n");

    //2��
    int num1 = 1, num2 = 3, num3 = 5;
    printf("���� ū ��: %d\n", max_num(num1, num2, num3));
    printf("���� ���� ��: %d\n\n", min_num(num1, num2, num3));


    //3��
    int n;
    printf("1���� �ڿ��� �Է�: ");
    scanf_s("%d", &n);
    int n1 = n - 1;
    while (n1 > 1) {
        if (is_prime(n1)) {
            printf("%d���� �����鼭 ���� ū �Ҽ�: %d\n", n, n1);
            break;
        }
        n1--;
    }
    printf("\n");

    //4��
    double d1, d2;
    srand(time(NULL));

    printf("2���� �Ǽ� �Է�: ");
    scanf_s("%lf %lf", &d1, &d2);
    for (int i = 0; i < 5; i++)
        printf("%f ", f_rand(d1, d2));
    printf("\n");

    return 0;
}

/*���� ��� ���
���ĺ� �Է�: 3
ã�� ���ĺ��� �ƴմϴ�. ���ĺ��� �ٽ� �Է��ϼ���...

���ĺ� �Է�: k
ã�� ���ĺ��� �ƴմϴ�. ���ĺ��� �ٽ� �Է��ϼ���...

���ĺ� �Է�: Q
�� 3ȸ �����Ͽ� ���ĺ��� ã�ҽ��ϴ�.
ã�� ���ĺ��� ��� ���� ���� ���� 'Q' �Դϴ�.

���� ū ��: 5
���� ���� ��: 1

1���� �ڿ��� �Է�: 100
100���� �����鼭 ���� ū �Ҽ�: 97

2���� �Ǽ� �Է�: 15 20.5
16.089022 18.208823 17.415220 16.372860 20.194845
*/
/*���� ��� ���
���ĺ� �Է� : 3
ã�� ���ĺ��� �ƴմϴ�. ���ĺ��� �ٽ� �Է��ϼ���...

���ĺ� �Է� : k
ã�� ���ĺ��� �ƴմϴ�. ���ĺ��� �ٽ� �Է��ϼ���...

���ĺ� �Է� : Q
�� 3ȸ �����Ͽ� ���ĺ��� ã�ҽ��ϴ�.
ã�� ���ĺ��� ��� ���� ���� ���� 'Q' �Դϴ�.

���� ū ��: 5
���� ���� ��: 1

1���� �ڿ��� �Է�: 100
100���� �����鼭 ���� ū �Ҽ�: 97

2���� �Ǽ� �Է�: 15 20.5
15.006882 18.099719 16.063173 19.448073 18.217551
����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .
*/