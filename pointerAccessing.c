#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("value of a:%d\n",a);
    printf("value of a:%d\n",*p);
    printf("Address of a:%d\n",&a);
    printf("Address of a:%d\n",p);
}
