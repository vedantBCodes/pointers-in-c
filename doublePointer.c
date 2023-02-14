#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;  //Here p is the pointer
    int **q=&p; //Here q is the double pointer
    printf("Value of a:%d\n",a);
    printf("Value of a:%d\n",*p);
    printf("Value of a:%d\n",**q);
}
