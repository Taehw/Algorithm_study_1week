//�ִ�����, �ּҰ����
//��Ŭ���� ȣ����(Euclidean algorithm)-�ִ�����
//�ּҰ������ �� �ڿ��� ���� �ִ������� ������ 
// ��Ÿ�ӿ��� ����
#include <stdio.h>

int cal(int x, int y)
{
    int n =0 ; //�ʱ�ȭ �����ָ� ��Ÿ�ӿ���
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
    if (0 < a && a < 10000 && 0 < b && b < 10000) //0 < a, b < 10000 ��Ÿ�ӿ��� ���� �ۼ����ٰ�
    {
        gcf = cal(a, b);
        printf("%d\n", gcf);
        printf("%d", a*b/gcf);
    }

    return 0;
}