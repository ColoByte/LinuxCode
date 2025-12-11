#include <stdio.h>

void func()
{
    int a =1;
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