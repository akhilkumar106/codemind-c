#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N>0)
    {
        for(int i=1;i<=N;i++)
        {
            printf("%d",i);
            
        }
        printf("
");
        N--;
    }
    return 0;
}