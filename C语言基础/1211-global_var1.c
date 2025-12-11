# include <stdio.h>
int g_val = 2025; //全局变量，存储在全局区，生命周期为整个程序运行期间

void P()
{
    printf("全局变量g_val = %d\n", g_val);
}