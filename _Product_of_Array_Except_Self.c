#include<stdio.h>
int main(){int n;scanf("%d",&n);int a[100],i,mul=1,j;for(i=0;i<n;i++){scanf("%d",&a[i]);}for(i=0;i<n;i++){mul=1;for(j=0;j<n;j++){if(i!=j){mul=mul*a[j];}}printf("%d ",mul);}}