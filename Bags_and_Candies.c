#include<stdio.h>
int main()
{
    int n,k,m,min,max;
    scanf("%d%d%d",&n,&k,&m);
    min=n/(k*m);
    max=min+1;
    if(n%(k*m)!=0)
    {
        printf("%d",max);
    }
    else
    {
        printf("%d",min);
    }
}