#include <stdio.h>
int main()
{
    int arr[5] = {0};
    printf("请输入5个整数：");
    int i = 0;
    while(i < 5)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    int max = arr[0];
    for(i=1; i<5; i++)
    {
        if (arr[i] > max) max = arr[i];
    }
    printf("最大值是：%d\n", max);
    return 0;

}
