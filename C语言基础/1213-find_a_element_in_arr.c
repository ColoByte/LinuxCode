#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 5, 7, 9, 10, 13,14, 34};
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    int num = 0;
    int mid;

    printf("请输入数组需要查找的数：");
    scanf("%d", &num);
    while(left <= right)
    {
        mid = (left + right) / 2;
        if(arr[mid] < num)
            left = mid + 1;
        else if(arr[mid] > num)
            right = mid - 1;
        else 
        {
            printf("num为数组中的元素arr[%d]\n", mid);
            break;
        }
    }
    if (left > right)
        printf("找不到");
    return 0;
}