#include<stdio.h>
int main(){int t,g;scanf("%d",&t);for(g=1;g<=t;g++){int n,c=0,j;scanf("%d",&n);int a[100],i,x=0;for(i=0;i<n-1;i++){scanf("%d",&a[i]);}for(i=1;i<=n;i++){c=0;for(j=0;j<n-1;j++){if(i!=a[j]){c+=1;}}if(c==n-1){printf("%d",i);x=1;break;}}if(x==0){printf("%d",n+1);}printf("
");}}