/*
문제
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

입력
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

출력
주어진 수들 중 소수의 개수를 출력한다.

에라토스테네스의 체
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count;
    int n = 0;
    int df = 0;
    scanf("%d", &n);
    
    if(n<=100 && n > 0)
    {
        int* arr;
        arr = (int*) malloc(sizeof(int) * n); //배열에 값을 동적으로 할당하기위해 malloc 사용

        for(int i = 0; i < n ; i++) 
        {
            scanf("%d", &arr[i]); 
            if(arr[i] > 1000) //배열에 입력된 값이 1000을 넘어갈경우 반복문 탈출 후 프로그램 종료
            {
                break;
            }
        } //숫자 입력 완료
        for(int j = 0; j < n ; j ++)
        {
            count = 0; //처음에 실행할때 이걸 안해줘서 계속 오류가 생겼음 df의 값이 이상하게 나옴
            for(int d = 1; d <= arr[j]; d++)
            {
                if(arr[j]%d == 0)
                {
                    count++; //입력된 숫자의 약수를 세는 변수
                }
            }
            if(count == 2) //두번째 실수 바깥쪽 for문에 넣어야할걸 안으로 넣었음. / 약수의 갯수가 2개뿐이면 소수이므로 소수의 갯수를 세는 df값을 1증가
            {
                df++;
            }
        }
        printf("%d", df);
        free(arr);
    }
    
    return 0;
}