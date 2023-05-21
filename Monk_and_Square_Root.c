#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int l=0;l<t;l++)
    {
        long long int i,a,b,f=0;
        scanf("%lld %lld",&a,&b);
        for(i=0;i<b;i++)
        {
            if(i*i%b==a)
            {
                printf("%lld
",i);
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("-1
");
        }
    }
}


