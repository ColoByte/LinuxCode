#include <stdio.h>
#include <windows.h>

int main()
{
    char arr1[] = "Hello, world!!!";
    char arr2[] = "###############";
    int left = 0;
    int right = strlen(arr1) - 1; // 或者sizeof(arr1)/sizeof(arr[0])-2
    while(left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        Sleep(300);
        left++;
        right--;
    }
    return 0;
}