#include<stdio.h>
int swap(int*,int*);

int swap(int *a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("values after swapping:\n a=%d and b=%d.\n",*a,*b);
}
int main()
{

    int a,b;
    printf("enter two number:\n");
     scanf("%d%d",&a,&b);

        printf("values before swapping:\n a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("values after swapping in main:\n a=%d and b=%d.\n",a,b);

}

    