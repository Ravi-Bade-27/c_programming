#include<stdio.h>
void displaymarks(int[],int);
int main()
{

    int marks[5]={65,72,77,82,79};
    displaymarks(marks,5);

    return 0;
}
void displaymarks(int e[],int n)
{

    for( int i=0;i<n;i++)
    printf("%d\t",e[i]);
}  