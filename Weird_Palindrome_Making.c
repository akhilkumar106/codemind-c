#include<stdio.h>
int main()
{
    int t,n,i,x;
    scanf("%d",&t);
    while(t--)
    {
        int c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x%2==1)
            {
                c++;
            }
        }
        if(c%2==1)
        {
            c--;
            
        }
        printf("%d
",c/2);
    }
}