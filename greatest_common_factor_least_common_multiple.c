//�ִ�����, �ּҰ����
//��Ŭ���� ȣ����(Euclidean algorithm)-�ִ�����
//�ּҰ������ �� �ڿ��� ���� �ִ������� ������ 
// ��Ÿ�ӿ��� ����
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

int cal(int x, int y) //�ִ������� ���ϴ� �Լ�
{
    while (y != 0)  //0���� ������ �ȵǴϱ�
    {
        int temp = y; 
        y = x % y; //y�� �������� �ǰ�
        x = temp;  //x�� y�� �ȴ�  --> �̰����� y�� x�� �ִ� ������� ������ ����
    }
    
    return x;
}

int main(void)
{
    int a, b;
    int gcf, lcm;

    scanf("%d %d", &a, &b);
   
    gcf = cal(a, b); //�ִ�����
    lcm = a*b/gcf;  //�ּҰ����

    printf("%d\n", gcf);
    printf("%d", lcm);

    return 0;
}