#include <stdio.h>
int main()  
{
    int i = 0;
    do
    {
        i++;
        if(i == 3)
            continue;
        if(i == 8)
            break;  
        printf("%d\n", i);
    } while(i < 10);
    return 0;
}

