#include<stdio.h>
int main(){int n,i;scanf("%d",&n);long long int a[100],sum=0;for(i=0;i<n;i++){scanf("%lld",&a[i]);}for(i=0;i<n;i++){sum=sum+a[i];}printf("%lld",sum);}