//����
//3C2 = 3P2 / 2!
//���� ũ�Ƿ� long long �� ���--> �Է°��� long long ������ �ʰ�-->string ���
//�Ľ�Į�� �ﰢ��
#include <stdio.h>

long long p(int a, int b)
{
    long long mul = 1;

    for(int i = b; b > 0 ; b--)
    {
        mul *= a;
        a--;
    }
        
    return mul;
}

long long f(int b)
{
    long long mul = 1;

    for(int i = 1; i <= b; i++ )
    {
        mul*=i;
    }

    return mul;
}

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    if(5 <= n && n <= 100 && 5 <= m && m <= 100 && m <= n) //(5 <= n <=100 && 5 <= m <=100 && m <= n) �̷��ű���
    {
        printf("%lld\n", p(n, m)/f(m));
    }
    
    return 0;
}