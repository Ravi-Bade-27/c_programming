#include<stdio.h>
#include<string.h>


int main()
{

    char s1[20]="seed";
    char s2[20]="seed";


    if(strcmp(s1,s2)==0)
    {
      printf("string 1 and string 2 are equal");
    }
    else
    {
        printf("string 1 and 2 are different");
    
    }
    return 0;
}