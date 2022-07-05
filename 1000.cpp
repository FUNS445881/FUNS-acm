#include<stdio.h>
int main()
{
    int a , b;
    while (~scanf("%d%d", &a, &b))   //下面有关于~的解析
    {
        printf("%d\n", a + b);
    }
    return 0;
}