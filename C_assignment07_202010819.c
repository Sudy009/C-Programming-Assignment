#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//2번
int max_num(int n1, int n2, int n3)
{
    //아래를 완성하시오.
    int max;
    max = (n1 > n2) ? n1 : n2;
    max = (max > n3) ? max : n3;
    return max;
}
int min_num(int n1, int n2, int n3)
{
    //아래를 완성하시오.
    int min;
    min = (n1 < n2) ? n1 : n2;
    min = (min < n3) ? min : n3;
    return min;
}

//3번
int is_prime(int n)
{
    //아래를 완성하시오.
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

//4번
double f_rand(double d1, double d2)
{
    //아래를 완성하시오.
    double randnum;

    randnum = (double)rand() / RAND_MAX * (d2 - d1) + d1;
    return randnum;
}

int main(void)
{
    //1번
    int cnt = 0;
    char ch;

    while (1)
    {
        //아래를 완성하시오.
        cnt++;
        printf("알파벳 입력: ");
        scanf_s(" %c", &ch, 1);

        if (ch == 'q' || ch == 'Q') {
            printf("총 %d회 실행하여 알파벳을 찾았습니다.\n", cnt);
            printf("찾은 알파벳은 대소 문자 구별 없이 'Q' 입니다.\n");
            break;
        }
        else {
            printf("찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요...\n\n");
        }

    }
    printf("\n");

    //2번
    int num1 = 1, num2 = 3, num3 = 5;
    printf("가장 큰 수: %d\n", max_num(num1, num2, num3));
    printf("가장 작은 수: %d\n\n", min_num(num1, num2, num3));


    //3번
    int n;
    printf("1개의 자연수 입력: ");
    scanf_s("%d", &n);
    int n1 = n - 1;
    while (n1 > 1) {
        if (is_prime(n1)) {
            printf("%d보다 작으면서 가장 큰 소수: %d\n", n, n1);
            break;
        }
        n1--;
    }
    printf("\n");

    //4번
    double d1, d2;
    srand(time(NULL));

    printf("2개의 실수 입력: ");
    scanf_s("%lf %lf", &d1, &d2);
    for (int i = 0; i < 5; i++)
        printf("%f ", f_rand(d1, d2));
    printf("\n");

    return 0;
}

/*실제 출력 결과
알파벳 입력: 3
찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요...

알파벳 입력: k
찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요...

알파벳 입력: Q
총 3회 실행하여 알파벳을 찾았습니다.
찾은 알파벳은 대소 문자 구별 없이 'Q' 입니다.

가장 큰 수: 5
가장 작은 수: 1

1개의 자연수 입력: 100
100보다 작으면서 가장 큰 소수: 97

2개의 실수 입력: 15 20.5
16.089022 18.208823 17.415220 16.372860 20.194845
*/
/*예시 출력 결과
알파벳 입력 : 3
찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요...

알파벳 입력 : k
찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요...

알파벳 입력 : Q
총 3회 실행하여 알파벳을 찾았습니다.
찾은 알파벳은 대소 문자 구별 없이 'Q' 입니다.

가장 큰 수: 5
가장 작은 수: 1

1개의 자연수 입력: 100
100보다 작으면서 가장 큰 소수: 97

2개의 실수 입력: 15 20.5
15.006882 18.099719 16.063173 19.448073 18.217551
계속하려면 아무 키나 누르십시오 . . .
*/