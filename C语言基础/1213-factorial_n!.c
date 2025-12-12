#include <stdio.h>

int factorial(int a)
{
    int result = 1;
    for(int i = 1; i <= a ; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n = 0;
    printf("请输入一个非负整数：");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d 的阶乘是 %d\n", n, fact);    
    return 0;

}