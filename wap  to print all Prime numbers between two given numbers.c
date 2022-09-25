
#include<stdio.h>
int main()
{
    int i,j,k,x;
    printf("enter the two number");
    scanf("%d%d",&i,&j);

    for(x=i+1;x<=j-1;x++)
    { for(k=2;k<x;k++)
        { if(x%k==0)
          break;
        }

    if(k==x)
 printf(" %d",x);


    }

    return 0;



}
