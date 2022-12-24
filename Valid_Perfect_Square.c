#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=a[i]/2;j++)
        {
            if(a[i]==j*j)
            {
                c++;
            }
        }
        if(c>0)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
       }
  }
}