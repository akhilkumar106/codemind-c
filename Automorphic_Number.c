#include<stdio.h>
int main()
{
    int n,sq,pro=1;
    scanf("%d",&n);
    int temp=n;
    sq=n*n;
    while(n>0)
    {
        pro=pro*10;
        n=n/10;
    }
    if(sq%pro==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
        
    }
}