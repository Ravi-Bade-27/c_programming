#include<stdio.h>
int add();

int add()
{

    int a=10,b=20,c;
    c=a+b;
    return c;
}
int main ()
{

    int result=add();
    printf("the addition is%d",result);
    return 0;
}