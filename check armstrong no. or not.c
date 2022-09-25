#include<stdio.h>
int main()
{
    int i,j,c=0,h=0,k,m=1,x,g;
    printf ("enter the number \n");
    scanf("%d",&i);
    x=i;
    for(i;i>0;i=i/10)
    { c++; }
    g=x;

    for(x;x>0;x=x/10)
       { j=x %10;
       k=j;
       for(m;m<c;m++)
       { j=j*k; }
       m=1;
        h=h+j;
       } printf(" \n %d",h);
        if(g==h)
            printf("\n Armstrong number ");
       else
       printf(" \n not Armstrong number");


       return 0;

}
