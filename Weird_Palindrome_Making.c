#include<stdio.h>
int main(){int t,j;scanf("%d",&t);for(j=1;j<=t;j++){int n;scanf("%d",&n);int a[100],i,c=0;for(i=0;i<n;i++){scanf("%d",&a[i]);}for(i=0;i<n;i++){if(a[i]%2==1){c+=1;}}printf("%d
",c/2);}}