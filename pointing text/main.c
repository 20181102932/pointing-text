#include<stdio.h>
int main()
{
    int a=52;
    printf("a的值是%d\n",a);
    int *i;
    i=&a;
    printf("a的地址是%x\n",i);
    int *x;
    x=i;
    printf("a=%d\n",*i);
    return 0;
}
