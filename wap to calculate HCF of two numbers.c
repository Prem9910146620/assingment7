#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter two number \n");
    scanf("\n %d \n %d",&a,&b);
    i=a<b?a:b;
    for(i;i<(a>b?a:b);i--)
    {
        if(a%i==0&&b%i==0)
            break;
    }
    printf("HCF IS %d",i);
    return 0;
}
