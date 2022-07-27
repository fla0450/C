#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=60&&a<=70||a>=30&&a<=40){
        printf("win");
    }else{
        printf("lose");
    }
}