#include <stdio.h>
#include <string.h>

int main(){
    // 关于字符串结尾的\0
    // str1和str3都是以\0结尾的字符串，可以正确输出和计算
    // str2没有以\0结尾，strlen计算时会继续读取内存直到遇到\0，可能导致未定义行为
    char str1[] = "Hello";
    char str2[] = {'H', 'e', 'l', 'l', 'o'};
    char str3[] = {'H', 'e', 'l', 'l', 'o','\0'};
    printf("str1: %s  Len: %d\n", str1, strlen(str1));
    printf("str2: %s  Len: %d\n", str2, strlen(str2));
    printf("str3: %s  Len: %d\n", str3, strlen(str3));

    //printf("%c", '''); // 错误写法，单引号内必须有字符
    printf("%c", '\'');
    printf("'");
    printf("\"");
    printf("C: \\Program Files\\MyApp\n");
    printf("\a\a\a\a\a"); // 发出5次警报声
    printf("%c  ", '\130'); // 八进制表示字符 'X'
    printf("%c  \n", '\x58'); // 十六进制表示字符 'X'
    printf("%d\n",strlen("C:\test\618\test.c")); // 输出14，\t和\61被识别为转义字符
    //  /t是一个字符，但是输出后效果相当于四个字符

    int num [10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    while(i < 10){
        printf("num[%d] = %d\n", i, num[i]);
        i++;
    }
    
    return 0;
}


