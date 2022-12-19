#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n],i,avg,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}