#include <stdio.h>
int main(){
  int a[101][101];
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1){
            a[i][j]=i;
            printf("%d ",a[i][j]);
        }else{
            a[i][j]=a[i][j-1]+n;
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");
  }  
}