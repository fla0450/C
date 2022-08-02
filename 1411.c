#include <stdio.h>
int main(){
    int n,a[51]={0,};
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++){
        int k;
        scanf("%d",&k);
        a[k]=k;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            printf("%d",i);
        }
    }
}