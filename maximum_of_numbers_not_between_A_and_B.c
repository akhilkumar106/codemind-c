#include<stdio.h>
int main()
{
    int n,a[n],i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b,c;
    scanf("%d%d",&b,&c);
    m=a[0];
    for(i=0;i<n;i++)
    {
           if(m<a[i] && !(a[i]>=b && a[i]<=c))
            {
                m=a[i];
            }
    }
    if(m==a[0])
    printf("-1");
    else
    printf("%d",m);
}