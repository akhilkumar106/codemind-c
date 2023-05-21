#include<stdio.h>
int main()
{
    int a,i,n;
    scanf("%d %d",&a,&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
    return 0;
}