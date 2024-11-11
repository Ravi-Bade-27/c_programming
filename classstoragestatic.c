#include<stdio.h>
void func();

void func()
{
    static a=0;
    int b=0;
    a++;
    b++;
    printf("a=%d,b%d\n",a,b);


}
int main()
{
    func();
    func();
    func();
    func();

    return 0;



}