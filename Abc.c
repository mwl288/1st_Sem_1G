#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 중복 체크 함수
// 중복 값이 없다면 0을 return
// 중복 값이 있다면 체크를 중지하고 1을 return
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
    printf("<중간프로젝트2>\n");
    printf("학번 : 202320755,  이름 : 이민우\n\n");
    printf("백화점에서 물건을 구매하십시오. \n\n");
    printf("TV의 가격은 20만원이며 응모 기회는 10번 주어집니다.\n");
    printf("냉장고의 가격은 10만원이며 응모 기회는 5번 주어집니다.\n");
    printf("청소기의 가격은 5만원이며 응모 기회는 2번 주어집니다.\n");
    printf("오븐의 가격은 1만원이며 응모 기회는 1번 주어집니다.\n");
    
    printf("\n당신의 현재 보유 자금은?(x만원) : ");  //  프로그램 안내 메시지
    scanf("%d", &m);
    while(m < 0 || m > 500)
    {
        printf("잘못된 금액입니다. 0~500만원 이하의 금액을 입력하세요.\n");
        printf("\n당신의 현재 보유 자금은?(x만원) : "); 
        scanf("%d", &m);
    }
    
    int ex = m;
    int cou = 0;
    int n = 0;
    int ex_m = m;
    int lot_num = 0;

    while(cou != 5)
    {
        printf("\n무엇을 구매하시겠습니까?\n");
        printf("1.TV   2.냉장고   3.청소기   4.오븐  5.구입을 멈춘다 \n");  //  "물건 구입 메뉴"
        scanf("%d", &cou);

        //  1~4 메뉴 선택 시, 각 물건을 A라 하면 "내가 구매할 A의 개수는? : " 출력 이후 "잔돈은 n만원입니다" 출력
    
        switch (cou)
        {
        case 1:
        
            printf("\n내가 구매할 TV의 개수는? : ");
            scanf("%d", &n);

            ex_m = ex;
            ex = ex - (n * 20);

            //  잔돈을 초과하여 구매 시 "보유한 자금을 %d만원만큼 초과하였습니다." 출력
            if (ex < 0)
            {
                printf("보유한 자금을 %d만원만큼 초과하였습니다.\n", abs(ex));
                if ( ex_m < 20 )
                {
                    printf("현재 잔돈은 %d만원이며, TV는 구매할 수 없습니다.", ex_m);
                }
                else
                {
                    printf("현재 잔돈은 %d만원이며, TV는 %d 이하로 구매할 수 있습니다.", ex_m, ex_m/20);
                }
            }
            else
            {
                printf("잔돈은 %d만원 입니다.\n", ex);
                lot_num += n * 10;
            }

            break;
        
        case 2:
        
            printf("\n내가 구매할 냉장고의 개수는? : ");
            scanf("%d", &n);

            ex_m = ex;
            ex = ex - (n * 10);

            if (ex < 0)
            {
                printf("보유한 자금을 %d만원만큼 초과하였습니다.\n", abs(ex));
                if (ex_m < 10)
                {
                    printf("현재 잔돈은 %d만원이며, 냉장고는 구매할 수 없습니다.", ex_m);
                }
                else
                {
                    printf("현재 잔돈은 %d만원이며, 냉장고는 %d 이하로 구매할 수 있습니다.", ex_m, ex_m / 10);
                }
            }
            else
            {
                printf("잔돈은 %d만원 입니다.\n", ex);
                lot_num += n * 5;
            }

            break;
        
        case 3:
        
            printf("\n내가 구매할 청소기의 개수는? : ");
            scanf("%d", &n);

            ex_m = ex;
            ex = ex - (n * 5);

            if (ex < 0)
            {
                printf("보유한 자금을 %d만원만큼 초과하였습니다.\n", abs(ex));
                if (ex_m < 5)
                {
                    printf("현재 잔돈은 %d만원이며, 청소기는 구매할 수 없습니다.", ex_m);
                }
                else
                {
                    printf("현재 잔돈은 %d만원이며, 청소기는 %d 이하로 구매할 수 있습니다.", ex_m, ex_m / 5);
                }
            }
            else
            {
                printf("잔돈은 %d만원 입니다.\n", ex);
                lot_num += n * 2;
            }

            break;
        
        case 4:
          
            printf("\n내가 구매할 오븐의 개수는? : ");
            scanf("%d", &n);

            ex_m = ex;
            ex = ex - (n * 1);

            if (ex < 0)
            {
                printf("보유한 자금을 %d만원만큼 초과하였습니다.\n", abs(ex));
                if (ex_m < 1)
                {
                    printf("현재 잔돈은 %d만원이며, 오븐은 구매할 수 없습니다.", ex_m);
                }
                else
                {
                    printf("현재 잔돈은 %d만원이며, 오븐은 %d 이하로 구매할 수 있습니다.", ex_m, ex_m / 1);
                }
            }
            else
            {
                printf("잔돈은 %d만원 입니다.\n", ex);
                lot_num += n * 1;
            }

            break;
        
        case 5:
            
            printf("\n더 이상 물건을 사지 않습니다.");

            break;
            
        default:
            
            printf("\n잘못된 선택입니다. 다시 선택해주세요,\n");

            break;
            
        }
    }
   

    //  5.구입을 멈춘다 선택 시 "더 이상 물건을 사지 않습니다", "경품 응모를 시작합니다" 출력 이후 "경품 응모 단계"로 넘어감

    //  1~5 외의 메뉴  선택 시 "잘못된 선택입니다. 다시 선택해주세요" 출력 후 다시 "물건 구입 메뉴" 출력








    //  "경품 응모 단계"
    printf("\n경품 응모를 시작합니다.\n");
    // "내 응모 기회는 : %d" 출력
    printf("\n내 응모 기회는: %d",lot_num);

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
        //중복되지 않으면 입력
        xd[i] = temp;
    }
    printf("\n경품 응모 번호는 : ");
    for (i = 0; i < lot_num; i++) 
    {
        printf(" %d", xd[i]);  //  중복되지 않는 랜덤 경품 응모 번호 출력
    }

    int td[10] = { 0 };
    for (i = 0; i < 10; i++)
    {
        do
        {
            temp = rand() % 100 + 1;
            ret = check_duplicate(td, i, temp);
        } while (ret == 1);
        //중복되지 않으면 입력
        td[i] = temp;
    }
    printf("\n경품 당첨 번호는 :");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", td[i]);  // 중복되지 않는 랜덤 경품 당첨 번호 출력
    }

    //  "일치하는 번호 개수: %d개" 출력
    int win_cou = 0;
    for(i = 0; i < lot_num; i++)
    {
        ret = check_duplicate(td, 10, xd[i]);
        if (ret == 1)
        {
            win_cou += 1;
        }
    }
    printf("\n일치되는 번호 개수: %d개\n", win_cou);
    
    //  "당신의 등수: %d등" 출력
    /*
    if (win_cou == 10) 
    {
        printf("당신의 등수: 1등");
    }
    else if (win_cou <= 9 && win_cou >= 7) 
    {
        printf("당신의 등수: 2등");
    }
    else if (win_cou <= 6 && win_cou >= 5)
    {
        printf("당신의 등수: 3등");
    }
    else if (win_cou <= 4 && win_cou >= 2)
    {
        printf("당신의 등수: 4등");
    }
    else
    {
        printf("당신의 등수: 5등");
    }
    */
    switch (win_cou) 
    {
    case 10:
        printf("당신의 등수: 1등");
        break;
    case 9:
    case 8:
    case 7:
        printf("당신의 등수: 2등");
        break;
    case 6:
    case 5:
        printf("당신의 등수: 3등");
        break;
    case 4:
    case 3:
    case 2:
        printf("당신의 등수: 4등");
        break;
    case 1:
    case 0:
        printf("당신의 등수: 5등");
        break;
    }
    return 0;
}