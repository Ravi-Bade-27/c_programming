#include<stdio.h>
void areaofrectangle();

void areaofrectangle()
{

    int l,b,area;
    printf("enter a valve l and b");
    scanf("%d %d",&l,&b);
    area=l*b;
    printf("area of rectangle is:%d",area);
}
int main()
{

    areaofrectangle();
    return 0;
}