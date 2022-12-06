#include<stdio.h>
int main()
{
    int i,n,r,rev=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }
    printf("%d%d",rev,n);
    
}