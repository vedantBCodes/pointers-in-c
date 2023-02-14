#include<stdio.h>
int main()
{
   int a,b;
   a=10,b=11;
   int *p,*q;
   p=&a;
   q=&b;
   p=q;
   printf("value of a:%d\n",a);
   printf("value of a:%d\n",*p);
   printf("value of a:%d\n",*q);
}
