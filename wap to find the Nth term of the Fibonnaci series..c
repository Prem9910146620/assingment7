#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n,i=1;
    printf("enter the number to find nth term of fibonnaci series=");
    scanf("%d",&n);

    for(i;i<=n;i++)
    { c=a+b;

        a=b;
        b=c;
        if(i==n)
            printf("%d",c);

    }

        return 0;

}
