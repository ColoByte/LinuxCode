//static修饰的局部变量存储在静态存储区，生命周期会延长到程序结束。
#include <stdio.h>

void func()
{
    static int a =1;
    a++;
    printf("%d\n", a);  
}

int main()
{
    int i = 0;
    while(i < 10)
    {
        func();
        i++;    
    }
}