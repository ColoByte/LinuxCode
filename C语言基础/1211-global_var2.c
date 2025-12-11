#include <stdio.h>
extern int g_val; //声明一个全局变量，引用另一个文件中的全局变量

int main()
{
    printf("全局变量g_val = %d\n", g_val);
    return 0;
}