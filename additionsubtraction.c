#include<stdio.h>
int add();

void sub();

void sub()
{

    int a=50,b=10,c;
    c=a-b;
    printf("%d:\n",c);
}
int add()
{

    int a=10,b=20,c;
    c=a+b;

    sub();

    return c;
}
int main()
{

    int result=add();
    printf("%d:\n",result);

    return 0;
}