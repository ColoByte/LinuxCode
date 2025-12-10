#include <stdio.h>

// int main() {
//     int choice;
//     printf("请做出选择: 1、卖红薯 2、回家种地 3、睡得像一头猪\n");  
//     scanf("%d", &choice);
//     if (choice == 1) {
//         printf("卖红薯，赚大钱！\n");
//     } else if (choice == 2) {
//         printf("回家种地，丰衣足食！\n");
//     } else if (choice == 3) {
//         printf("睡得像一头猪，真幸福！\n");
//     } else {
//         printf("选择无效，请重新选择！\n");
//     }
//     return 0;
// }

// int main()
// {
//     int line = 0;
//     while(line < 10)
//     {
//        printf("写第%d行代码，改变世界！\n", line + 1);
//         line++;
//     }
//     return 0;
// }

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int result = sum(m, n);
    printf("result = %d\n", result);
    return 0;
}