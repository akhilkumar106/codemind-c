#include<stdio.h>
int nod(long long int num)
{
    if(num<10)
    {
        return 1;
    }
    int c=0;
    while(num>0)
    {
        c++;
        num/=10;
    }
    return c;
}
int cor(long long int num)
{
    if(num<10)
    {
        return 1;
    }
    int a=nod(num);
    int arr[a],i,j,f=0;
    for(i=0;i<a;i++)
    {
        arr[i]=num%10;
        num/=10;
    }
    for(i=0;i<a-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    long long int i;
    if(a<=3)
    {
        for(i=0;i<=789;i++)
        {
            if(nod(i)==a&&cor(i)==1)
            {
                printf("%lld ",i);
            }
        }
    }
    else if(a==4)
    {
        for(i=1234;i<=6789;i++)
        {
             if(nod(i)==a&&cor(i)==1)
            {
                printf("%lld ",i);
            }
        }
    }
    else if(a==5)
    {
        for(i=12345;i<=56789;i++)
        {
             if(nod(i)==a&&cor(i)==1)
            {
                printf("%lld ",i);
            }
        }
    }
    else if(a==6)
    {
        for(i=123456;i<=456789;i++)
        {
             if(nod(i)==a&&cor(i)==1)
            {
                printf("%lld ",i);
            }
        }
    }
    else if(a==7)
    {
        for(i=1234567;i<=3456789;i++)
        {
             if(nod(i)==a&&cor(i)==1)
            {
                printf("%lld ",i);
            }
        }
    }
    else if(a==8)
    {
        for(i=12345678;i<=23456789;i++)
        {
             if(nod(i)==a&&cor(i)==1)
            {
                printf("%lld ",i);
            }
        }
    }
    else if(a==9)
    {
        printf("123456789");
    }
    else
    {
        printf("0");
    }
}