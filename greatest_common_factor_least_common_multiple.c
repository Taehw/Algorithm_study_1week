//최대공약수, 최소공배수
//유클리드 호제법(Euclidean algorithm)-최대공약수
//최소공배수는 두 자연수 곱에 최대공약수를 나눈것 
// 런타임에러 뭔데
#include <stdio.h>

/*int cal(int x, int y)
{
    int n = 0; 
    if(x > y)
    {
        for(int j = y; j > 0 ; j--)
        {
            if(x % j == 0 && y % j == 0)
            {
                n = j;
                break;
            }
        }
    }
    return n;
}*/

int cal(int x, int y) //최대공약수를 구하는 함수
{
    while (y != 0)  //0으로 나누면 안되니까
    {
        int temp = y; 
        y = x % y; //y는 나머지가 되고
        x = temp;  //x는 y가 된다  --> 이과정은 y와 x의 최대 공약수를 가지는 과정
    }
    
    return x;
}

int main(void)
{
    int a, b;
    int gcf, lcm;

    scanf("%d %d", &a, &b);
   
    gcf = cal(a, b); //최대공약수
    lcm = a*b/gcf;  //최소공배수

    printf("%d\n", gcf);
    printf("%d", lcm);

    return 0;
}