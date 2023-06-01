#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,j,c=0,x=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if (a[i]==a[j])
                {
                    c+=1;
                }
            }
        }
        if(c==0)
        {
            printf("%d ",a[i]); 
            x=1;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
}