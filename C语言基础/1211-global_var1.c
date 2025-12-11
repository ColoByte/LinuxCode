# include <stdio.h>
int g_val = 2025; 
//全局变量，存储在全局区，生命周期为整个程序运行期间,可以被其他文件引用
static int s_val = 1024; 
//静态全局变量，只能在本文件内使用，不能被其他文件引用

void P()
{
    printf("全局变量g_val = %d\n", g_val);
}

// int sum(int a, int b)
// {
//     return a + b + g_val; 
// }
static int sum(int a, int b)
{
    return a + b + g_val; 
}
//static修饰的函数只能在本文件内使用，不能被其他文件引用