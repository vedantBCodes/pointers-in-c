#include<stdio.h>
int main()
{
    int a[ ]={2,5,1,6,8};
    int *p;
    p=&a[0];
    printf("%d\n",*p);  //p:2
    p=p+1;  //p++; Now p store a[1]
    printf("%d\n",*p);  //p:5
}
