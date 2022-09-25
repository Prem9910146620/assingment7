
#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n,i;
    printf("enter the number to first n term of fibonacci series =");
    scanf("%d",&n);
    for(i;i<=n;i++)
       { c=a+b;
        printf(" \n %d",c);
        a=b;
        b=c;
      }

       return 0;
}
