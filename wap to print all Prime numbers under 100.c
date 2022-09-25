main()
{
    int a=1,b=100,c,d;
    for(a++;a<=b-1;a++)
    {
        for(c=2;c<a;c++)
            if(a%c==0)
            break;
        if(c==a)
            printf(" %d",a);
        }

        return 0;
}
