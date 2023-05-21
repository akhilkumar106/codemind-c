#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    int c=0;
    for(int i=0;i<n;i++){
        if(str[i]=='I'){
            c+=1;
        }
        else if (str[i]=='V'){
            if(str[i-1]=='I'){
                c+=3;
            }
            else{
                c+=5;
            }
        }
        else if (str[i]=='X'){
            if(str[i-1]=='I'){
                c+=8;
            }
            else{
                c+=10;
            }
        }
        else if (str[i]=='L'){
            if(str[i-1]=='X'){
                c+=30;
            }
            else{
                c+=50;
            }
        }
        else if (str[i]=='C'){
            if(str[i-1]=='X'){
                c+=80;
            }
            else{
                c+=100;
            }
        }
        else if (str[i]=='D'){
            if(str[i-1]=='C'){
                c+=300;
            }
            else{
                c+=500;
            }
        }
        else if (str[i]=='M'){
            if(str[i-1]=='C'){
                c+=800;
            }
            if(str[i-1]=='X'){
                c+=980;
            }
            else{
                c+=1000;
            }
        }
    }
    printf("%d",c);
}