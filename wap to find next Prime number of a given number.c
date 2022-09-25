main()
{
    int i,x,k=2;
    printf("enter the number=");
    scanf("%d",&i);

    for(i=i+1;i;i++)
        { for(k;k<i;k++)
            { x=i%k;
            if(x==0)
            break;
            }
            if(k==i)
           {
               printf("%d",i);
            break;
           }

        }



    return 0;
}
