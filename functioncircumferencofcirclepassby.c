#include<stdio.h>
void circumferenceofcircle(int r);

void circumferenceofcircle(int r)
{

    float pi=3.14,area;
    area=2*3.14*r;
    printf("circumference of circle is:%d",area);

}
int main()
{

    int r;
    printf("enter the radias");
    scanf("%d",&r);
    circumferenceofcircle(r);

    return 0;
}