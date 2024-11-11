#include<stdio.h>
void displaymarks(int);
int main()
{

    int marks[5]={65,72,77,82,89};
    for(int i=0;i<5;i++)
    displaymarks(marks[i]);
    return 0;
}
void displaymarks(int e)
{

    printf("%d\t",e);
}