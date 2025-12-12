#include <stdio.h>
int main()
{
    //输出1-50内的奇数
    int i = 1;
    while(i <= 50)
    {
        if(i % 2 != 0)
        printf("%d ", i);
        i++;
    }
    int today = 0;
    scanf("%d", &today);
    switch (today)
    {
        case 0: //case后接的是整型&常量，字符也可以，字符本质就是整型
            printf("\n今天是星期天\n");
        case 1:
            printf("今天是星期一\n");
        case 2:
            printf("今天是星期二\n");
        default:
            break;
    
    }
    switch(today)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("工作日\n");
            break;
        case 6:
        case 0:
            printf("休息日\n");
            break;
        default:
            printf("输入有误\n");
            break;

    }
 
        
    return 0;

}