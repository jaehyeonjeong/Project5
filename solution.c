#include <stdio.h>

int main()
{
    int i, j; //���̿� ���� ��� ����
    int i2 = 0; //������ ���� �ʱ�ȭ
    int j2 = -1; //������ ���� �ʱ�ȭ
    int N;
    //int a = 1; ,ó���� �־��� �������� ������ ����ص� ������
    //int result = 0;

    printf("�Է��� ���̸� �����ϼ���.");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) //i = 1���� 5�� �ٴٸ������� �ݺ�
    {
        //���Ⱑ ���� �߿���!!!!
        //if���� ���� ���� 4��° ���ʹ� �����ϴ� �Լ��� ��������.
        //if(.....)

        if (i > (N / 2 + 1))
        {
            for (j = 1; j <= N; j++)
            {
                if (j <= ((N / 2) + 1))
                {
                    printf("%2d ", (N - i + 1) * j); //ù° �� 1 2 3 ���� ��� 
                    j2++;
                }
                else if (j > ((N / 2) + 1)) //j�� 4��° ���� ���޽� ����
                {
                    printf("%2d ", (N - i + 1) * j2); //�̶��� �������� ���ϸ� ���Ұ��� ����
                    j2--;
                }
            }
            printf("\n");
            j2 = -1;
        }
        else
        {
            for (j = 1; j <= N; j++) //N = 5�϶�
            {
                if (j <= ((N / 2) + 1))
                {
                    printf("%2d ", i * j); //ù° �� 1 2 3 ���� ��� 
                    j2++;
                }
                else if (j > ((N / 2) + 1)) //j�� 4��° ���� ���޽� ����
                {
                    printf("%2d ", i * j2); //�̶��� �������� ���ϸ� ���Ұ��� ����
                    j2--;
                }
            }
            printf("\n");
            j2 = -1;
        }
    }

    return 0;
}