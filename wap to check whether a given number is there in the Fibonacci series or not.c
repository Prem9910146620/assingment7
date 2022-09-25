#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i=1;
    printf("enter the number to check the number is there in the Fibonacci series or not=");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {   c=a+b;
        a=b;
        b=c;
        if(c==n)
            break;

    } if(c==n)
    printf("yes");
    else
        printf("not");


    return 0;
}
