//static修饰的局部变量存储在静态存储区，生命周期会延长到程序结束。
//static是用来修饰变量和函数的
//1.修饰局部变量-称为静态局部变量
//2.修饰全局变量-称为静态全局变量
//3. 修饰函数-称为静态函数
#include <stdio.h>

void func()
{
    static int a =1;
    //静态局部变量只会被初始化一次，程序结束时才会被销毁
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