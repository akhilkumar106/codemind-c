#include<stdio.h>
int prime(int a)
{
    int i;
    for (i=2; i*i<=a; i++)
    {
        if (a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a,b;
    int c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i*j==n && i!=j && prime(i)==1 && prime(j)==1)
            {
                a=i;
                b=j;
                c=1;
                break;
            }
        }
        if (c==1)
        {
            break;
        }
    }
    if (c==1)
    {
        printf("%d %d",a,b);
    }
    else
    {
        printf("-1");
    }
    return 0;
}