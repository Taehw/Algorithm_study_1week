//최대공약수, 최소공배수
//유클리드 호제법(Euclidean algorithm)-최대공약수
//최소공배수는 두 자연수 곱에 최대공약수를 나눈것 
// 런타임에러 뭔데
#include <stdio.h>

int cal(int x, int y)
{
    int n =0 ; //초기화 안해주면 런타임에러
    if(x > y)
    {
        for(int j = y; j > 0 ; j--) //j=0 
        {
            if(x%j==0&&y%j==0)
            {
                n = j;
                break;
            }
        }
    }
    return n;
}

int main(void)
{
    int a=0, b=0;
    int gcf=0, lcm=0;

    scanf("%d %d", &a, &b);
    if (0 < a && a < 10000 && 0 < b && b < 10000) //0 < a, b < 10000 런타임에러 따로 작성해줄것
    {
        gcf = cal(a, b);
        printf("%d\n", gcf);
        printf("%d", a*b/gcf);
    }

    return 0;
}