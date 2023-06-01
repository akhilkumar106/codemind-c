#include<stdio.h>
int main(){int n;scanf("%d",&n);int a[100],i,x,c=0;for(i=0;i<n;i++){scanf("%d",&a[i]);}scanf("%d",&x);for(i=0;i<n;i++){if(x==a[i]){printf("%d",i);c=1;}}if(c==0){printf("-1");}}