/*
����
�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù �ٿ� ���� ���� N�� �־�����. N�� 100�����̴�. �������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ����̴�.

���
�־��� ���� �� �Ҽ��� ������ ����Ѵ�.

�����佺�׳׽��� ü
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 0;
    int n = 0;
    int df = 0;
    scanf("%d", &n);
    
    if(n<=100 && n > 0)
    {
        int* arr;
        arr = (int*) malloc(sizeof(int) * n); //�迭�� ���� �������� �Ҵ��ϱ����� malloc ���

        for(int i = 0; i < n ; i++) 
        {
            scanf("%d", &arr[i]); 
            if(arr[i] > 1000) //�迭�� �Էµ� ���� 1000�� �Ѿ��� �ݺ��� Ż�� �� ���α׷� ����
            {
                break;
            }
        } //���� �Է� �Ϸ�
        for(int j = 0; j < n ; j ++)
        {
            for(int d = 1; d <= arr[j]; d++)
            {
                if(arr[j]%d == 0)
                {
                    count++; //�Էµ� ������ ����� ���� ����
                }
                if(count == 2)
                {
                    df++;
                }
            }
            
        }
        printf("%d", df);
    }

    
    return 0;
}