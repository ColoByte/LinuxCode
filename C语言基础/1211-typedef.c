#include <stdio.h>

typedef unsigned int unit;
typedef struct Person
{
    char name[20];
    int age;
} Person;

int main()
{
    unsigned int a = 10;
    unit b = 20;
    printf("a = %d, b = %d\n", a, b);
    printf("a = %u, b = %u\n", a, b);
    
}