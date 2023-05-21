#include<stdio.h>
int main()
{
    int a,b,l,r,rev,i;
    scanf("%d%d",&a,&b);
    i=a;
    for(i;i<b;i++)
    {
        rev=0;
        r=0;
        l=i;
        while(l>0)
        {
            r=l%10;
            rev=(rev*10)+r;
            l=l/10;
        }
        if(i==rev)
        {
            printf("%d ",i);
        }
    }
    return 0;
}