#include<stdio.h>
int add (int,int);

int add (int a,int b)
{
    int c=a+b;
    return c;
}
int main ()
{
    int a=10,b=20;
    int result=add(a,b);
    printf("%d",result);
    return 0;
}