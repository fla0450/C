#include <stdio.h>
int main(){
    static char c[100001];
    gets(c);
    int r=0;
    int l=0;
    for(int i=0;c[i]!='\0';i++){
        if(c[i] == '('){
            r++;
        }
        else if(c[i]==')'){
            l++;
        }
    }
    printf("%d %d",r,l);
}