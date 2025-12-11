#include <stdio.h>
 int main()
 {
    int a = 10;
    int* p = &a; //定义指针变量p，存储变量a的地址.&取地址符
    // int* PP = p; 不允许这样写

    printf("a = %d\n", a);
    * p = 20; //通过指针变量p修改a的值，*解引用符
    printf("使用指针修改后a = %d\n", a);
    printf("指针p的值(地址) = %p\n", p);
    // printf("指针p的值(地址) = %d\n", p); //%d打印地址是不正确的，应该使用%p
    printf("指针p指向的值 = %d\n", *p);

    printf("*char占用的字节数：%zu\n", sizeof(char*));
    printf("*int占用的字节数：%zu\n", sizeof(int*));
    printf("*float占用的字节数：%zu\n", sizeof(float*));
    printf("*double占用的字节数：%zu\n", sizeof(double*));

    return 0;

 }