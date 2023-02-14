#include<stdio.h>
main()
{
int a,b;
int *p,*q;
p=&a;
q=&b;
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
printf("addition=%d",*p+*q);
printf("\nsubstraction=%d",*p-*q);
printf("\nmultiplcation=%d",*p * *q);
printf("\ndivision=%d",(*p / *q));
}



