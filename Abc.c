#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �ߺ� üũ �Լ�
// �ߺ� ���� ���ٸ� 0�� return
// �ߺ� ���� �ִٸ� üũ�� �����ϰ� 1�� return
int check_duplicate(int arr[], int size, int num)
{
    int i;
    for (i = 0; i < size; i++) 
    {
        if (num == arr[i])
        {
            return 1;
        }
    }

    return 0;
}




int main() 
{
    int m = 0;
    printf("******************************\n");
    printf("<�߰�������Ʈ2>\n");
    printf("�й� : 202320755,  �̸� : �̹ο�\n\n");
    printf("��ȭ������ ������ �����Ͻʽÿ�. \n\n");
    printf("TV�� ������ 20�����̸� ���� ��ȸ�� 10�� �־����ϴ�.\n");
    printf("������� ������ 10�����̸� ���� ��ȸ�� 5�� �־����ϴ�.\n");
    printf("û�ұ��� ������ 5�����̸� ���� ��ȸ�� 2�� �־����ϴ�.\n");
    printf("������ ������ 1�����̸� ���� ��ȸ�� 1�� �־����ϴ�.\n");
    
    printf("\n����� ���� ���� �ڱ���?(x����) : ");  //  ���α׷� �ȳ� �޽���
    scanf("%d", &m);
    while(m < 0 || m > 500)
    {
        printf("�߸��� �ݾ��Դϴ�. 0~500���� ������ �ݾ��� �Է��ϼ���.\n");
        printf("\n����� ���� ���� �ڱ���?(x����) : "); 
        scanf("%d", &m);
    }
    
    int ex = m;
    int cou = 0;
    int n = 0;
    int ex_m = m;
    int lot_num = 0;

    while(cou != 5)
    {
        printf("\n������ �����Ͻðڽ��ϱ�?\n");
        printf("1.TV   2.�����   3.û�ұ�   4.����  5.������ ����� \n");  //  "���� ���� �޴�"
        scanf("%d", &cou);

        //  1~4 �޴� ���� ��, �� ������ A�� �ϸ� "���� ������ A�� ������? : " ��� ���� "�ܵ��� n�����Դϴ�" ���
    
        switch (cou)
        {
        case 1:
        
            printf("\n���� ������ TV�� ������? : ");
            scanf("%d", &n);

            ex_m = ex;
            ex = ex - (n * 20);

            //  �ܵ��� �ʰ��Ͽ� ���� �� "������ �ڱ��� %d������ŭ �ʰ��Ͽ����ϴ�." ���
            if (ex < 0)
            {
                printf("������ �ڱ��� %d������ŭ �ʰ��Ͽ����ϴ�.\n", abs(ex));
                if ( ex_m < 20 )
                {
                    printf("���� �ܵ��� %d�����̸�, TV�� ������ �� �����ϴ�.", ex_m);
                }
                else
                {
                    printf("���� �ܵ��� %d�����̸�, TV�� %d ���Ϸ� ������ �� �ֽ��ϴ�.", ex_m, ex_m/20);
                }
            }
            else
            {
                printf("�ܵ��� %d���� �Դϴ�.\n", ex);
                lot_num += n * 10;
            }

            break;
        
        case 2:
        
            printf("\n���� ������ ������� ������? : ");
            scanf("%d", &n);

            ex_m = ex;
            ex = ex - (n * 10);

            if (ex < 0)
            {
                printf("������ �ڱ��� %d������ŭ �ʰ��Ͽ����ϴ�.\n", abs(ex));
                if (ex_m < 10)
                {
                    printf("���� �ܵ��� %d�����̸�, ������ ������ �� �����ϴ�.", ex_m);
                }
                else
                {
                    printf("���� �ܵ��� %d�����̸�, ������ %d ���Ϸ� ������ �� �ֽ��ϴ�.", ex_m, ex_m / 10);
                }
            }
            else
            {
                printf("�ܵ��� %d���� �Դϴ�.\n", ex);
                lot_num += n * 5;
            }

            break;
        
        case 3:
        
            printf("\n���� ������ û�ұ��� ������? : ");
            scanf("%d", &n);

            ex_m = ex;
            ex = ex - (n * 5);

            if (ex < 0)
            {
                printf("������ �ڱ��� %d������ŭ �ʰ��Ͽ����ϴ�.\n", abs(ex));
                if (ex_m < 5)
                {
                    printf("���� �ܵ��� %d�����̸�, û�ұ�� ������ �� �����ϴ�.", ex_m);
                }
                else
                {
                    printf("���� �ܵ��� %d�����̸�, û�ұ�� %d ���Ϸ� ������ �� �ֽ��ϴ�.", ex_m, ex_m / 5);
                }
            }
            else
            {
                printf("�ܵ��� %d���� �Դϴ�.\n", ex);
                lot_num += n * 2;
            }

            break;
        
        case 4:
          
            printf("\n���� ������ ������ ������? : ");
            scanf("%d", &n);

            ex_m = ex;
            ex = ex - (n * 1);

            if (ex < 0)
            {
                printf("������ �ڱ��� %d������ŭ �ʰ��Ͽ����ϴ�.\n", abs(ex));
                if (ex_m < 1)
                {
                    printf("���� �ܵ��� %d�����̸�, ������ ������ �� �����ϴ�.", ex_m);
                }
                else
                {
                    printf("���� �ܵ��� %d�����̸�, ������ %d ���Ϸ� ������ �� �ֽ��ϴ�.", ex_m, ex_m / 1);
                }
            }
            else
            {
                printf("�ܵ��� %d���� �Դϴ�.\n", ex);
                lot_num += n * 1;
            }

            break;
        
        case 5:
            
            printf("\n�� �̻� ������ ���� �ʽ��ϴ�.");

            break;
            
        default:
            
            printf("\n�߸��� �����Դϴ�. �ٽ� �������ּ���,\n");

            break;
            
        }
    }
   

    //  5.������ ����� ���� �� "�� �̻� ������ ���� �ʽ��ϴ�", "��ǰ ���� �����մϴ�" ��� ���� "��ǰ ���� �ܰ�"�� �Ѿ

    //  1~5 ���� �޴�  ���� �� "�߸��� �����Դϴ�. �ٽ� �������ּ���" ��� �� �ٽ� "���� ���� �޴�" ���








    //  "��ǰ ���� �ܰ�"
    printf("\n��ǰ ���� �����մϴ�.\n");
    // "�� ���� ��ȸ�� : %d" ���
    printf("\n�� ���� ��ȸ��: %d",lot_num);

    int i;
    int xd[100] = { 0 };
    int ret = 0;
    int temp = 0;
    for (i = 0; i < lot_num; i++) 
    {
        do
        {
            temp = rand() % 100 + 1;
            ret = check_duplicate(xd, i, temp);
        } while (ret == 1);
        //�ߺ����� ������ �Է�
        xd[i] = temp;
    }
    printf("\n��ǰ ���� ��ȣ�� : ");
    for (i = 0; i < lot_num; i++) 
    {
        printf(" %d", xd[i]);  //  �ߺ����� �ʴ� ���� ��ǰ ���� ��ȣ ���
    }

    int td[10] = { 0 };
    for (i = 0; i < 10; i++)
    {
        do
        {
            temp = rand() % 100 + 1;
            ret = check_duplicate(td, i, temp);
        } while (ret == 1);
        //�ߺ����� ������ �Է�
        td[i] = temp;
    }
    printf("\n��ǰ ��÷ ��ȣ�� :");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", td[i]);  // �ߺ����� �ʴ� ���� ��ǰ ��÷ ��ȣ ���
    }

    //  "��ġ�ϴ� ��ȣ ����: %d��" ���
    int win_cou = 0;
    for(i = 0; i < lot_num; i++)
    {
        ret = check_duplicate(td, 10, xd[i]);
        if (ret == 1)
        {
            win_cou += 1;
        }
    }
    printf("\n��ġ�Ǵ� ��ȣ ����: %d��\n", win_cou);
    
    //  "����� ���: %d��" ���
    /*
    if (win_cou == 10) 
    {
        printf("����� ���: 1��");
    }
    else if (win_cou <= 9 && win_cou >= 7) 
    {
        printf("����� ���: 2��");
    }
    else if (win_cou <= 6 && win_cou >= 5)
    {
        printf("����� ���: 3��");
    }
    else if (win_cou <= 4 && win_cou >= 2)
    {
        printf("����� ���: 4��");
    }
    else
    {
        printf("����� ���: 5��");
    }
    */
    switch (win_cou) 
    {
    case 10:
        printf("����� ���: 1��");
        break;
    case 9:
    case 8:
    case 7:
        printf("����� ���: 2��");
        break;
    case 6:
    case 5:
        printf("����� ���: 3��");
        break;
    case 4:
    case 3:
    case 2:
        printf("����� ���: 4��");
        break;
    case 1:
    case 0:
        printf("����� ���: 5��");
        break;
    }
    return 0;
}