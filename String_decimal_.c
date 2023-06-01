#include<stdio.h>
#include<string.h>
int main(){int n,i;scanf("%d",&n);for(i=1;i<=n;i++){char str[100];int i,count=0,count2=0;scanf("%s",str);for(i=0;str[i]!=NULL;i++){count2++;if(str[i]>=48 && str[i]<=57){count++;}}if(count==count2){printf("True
");}else{printf("False
");}}}