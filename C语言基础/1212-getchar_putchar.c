/*【C语言 getchar 与输入缓冲区简要总结】
getchar 基本行为
getchar() 从标准输入缓冲区（stdin）读取下一个字符。
返回类型为 int，用于区分有效字符(0~255)与 EOF(-1)。
输入是行缓冲，只有按下回车后整行才进入 stdin。
getchar 会读取换行符
输入 "abc<Enter>"，getchar() 的读取顺序是：a, b, c, '\n'。
多次 getchar 会依次读取缓冲区中的每个字符，不会等待用户再次输入。
必须使用 int 接收 getchar 的返回值
char 无法正确表示 EOF(-1)，会导致逻辑错误。
混用 scanf 与 getchar 的常见问题
scanf("%d") 等格式不会读掉换行符。
下一次 getchar() 往往会读到残留的 '\n'，导致逻辑错误。
解决方法：在下一次输入前清空缓冲区。
清空缓冲区的两种写法
(1) 简单写法（不处理 EOF）：
while (getchar() != '\n');
只在意换行，不关心 EOF。
输入流遇到 EOF 时可能死循环。

(2) 推荐写法（处理 EOF）：
int tmp;
while ((tmp = getchar()) != '\n' && tmp != EOF);
- 同时处理换行与 EOF，更安全、更通用。 */

// #include <stdio.h>
// int main()
// {
//     printf("请输入一个字符：");
//     int c = getchar(); //int 是为了能够接收EOF，char接收不了。  EOF是-1
//     printf("您输入的字符是：");
//     putchar(c);

//     printf("\n请连续输入多个字符，按Ctrl+Z结束输入：\n");

//     int ch = 0;

//     //可以一次性输入很多字符,你的程序会在你“按下回车后”一次性读取你输入的全部字符.
//     //标准输入是“行缓冲”的
//     while((ch = getchar()) != EOF)
//     {
//         putchar(ch);
//     }
//     printf("\n请连续输入多个字符，按回车结束输入：\n");

//     getchar(); //吸收掉上一个回车符

//     while((ch = getchar()) != '\n')
//     {
//         putchar(ch);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    //功能1：输入密码，确认密码
    int password;
    int ch = 0;
    printf("请输入密码 ：");
    scanf("%s",&password);

    while((ch =  getchar()) != '\n')
    {   ; } //清空缓冲区

    printf("请确认密码(Y/N)：");
    ch = getchar();
    if (ch == 'Y')
            printf("确认密码\n");
    else if (ch == 'N')
            printf("取消密码\n");
    else
            printf("输入错误\n");
    
    //功能2：截取输出3-8之间的数字
    printf("功能2：截取输出3-8之间的数字");
    char x;
    while((x = getchar()) != EOF)
    {
        if(x >= '3' && x <= '8')
            continue;
        else
            putchar(x);
    }
    return 0;
}