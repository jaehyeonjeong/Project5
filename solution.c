#include <stdio.h>

int main()
{
    int i, j; //높이에 따른 행렬 변수
    int i2 = 0; //가변행 변수 초기화
    int j2 = -1; //가변열 변수 초기화
    int N;
    //int a = 1; ,처음에 주었던 변수들을 가지고 사용해도 무방함
    //int result = 0;

    printf("입력할 높이를 말씀하세요.");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) //i = 1부터 5가 다다를때까지 반복
    {
        //여기가 제일 중요함!!!!
        //if문을 만들어서 행의 4번째 부터는 감소하는 함수를 만들어야함.
        //if(.....)

        if (i > (N / 2 + 1))
        {
            for (j = 1; j <= N; j++)
            {
                if (j <= ((N / 2) + 1))
                {
                    printf("%2d ", (N - i + 1) * j); //첫째 행 1 2 3 까지 출력 
                    j2++;
                }
                else if (j > ((N / 2) + 1)) //j가 4번째 열에 도달시 감소
                {
                    printf("%2d ", (N - i + 1) * j2); //이때는 가변값을 곱하면 감소값이 나옴
                    j2--;
                }
            }
            printf("\n");
            j2 = -1;
        }
        else
        {
            for (j = 1; j <= N; j++) //N = 5일때
            {
                if (j <= ((N / 2) + 1))
                {
                    printf("%2d ", i * j); //첫째 행 1 2 3 까지 출력 
                    j2++;
                }
                else if (j > ((N / 2) + 1)) //j가 4번째 열에 도달시 감소
                {
                    printf("%2d ", i * j2); //이때는 가변값을 곱하면 감소값이 나옴
                    j2--;
                }
            }
            printf("\n");
            j2 = -1;
        }
    }

    return 0;
}