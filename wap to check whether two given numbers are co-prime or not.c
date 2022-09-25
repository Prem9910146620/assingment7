#include<stdio.h>
int main()
{
    int a,b=2,c,i;
    printf("enter the two number=");
    scanf(" \n %d \n %d",&a,&c);
    for(b;b<=(a<b?a:b);b++)
    {
        if(a%b==0&&c%b==0)
            break;
    }
     if(a%b==0&&c%b==0)
          printf(" not");
    else
        printf("co prime");


    return 0;

    }
