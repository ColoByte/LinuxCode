#include <stdio.h>
//结构体的定义和使用
typedef  struct Student{
    char name[20];
    int age;
    float score;
}Stu;
//通过指针访问结构体成员
void print(Stu* s)
{
    printf("name = %s, age = %d, score = %.1f\n", s->name, s->age, s->score);
}
void print_(Stu* s)
{
    printf("name = %s, age = %d, score = %.1f\n", (*s).name, (*s).age, (*s).score); 
}
int main()
{
    Stu jack = {"Jack Lee", 20, 98.5};
    printf("name = %s, age = %d, score = %.2f\n", jack.name, jack.age, jack.score);
    print(&jack);
    print_(&jack);
    return 0;
}