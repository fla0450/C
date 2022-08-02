#include <stdio.h>
int main(){
    int n,a[1001];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        for(int i=1;i<=n;i++){
            if(i+j<=n){
                printf("%d ",a[i+j]);
            }
            else if(i+j>n){
                printf("%d ",a[i+j-n]);
            }    
        }
        printf("\n");
    }
    
}