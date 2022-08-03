#include <stdio.h>
int main(){
  int a[101][101];
  int n;
  scanf("%d",&n);
  for(int i=n;i>0;i--){
    for(int j=n;j>0;j--){
        if(j==n){
            a[i][j]=i;
            printf("%d ",a[i][j]);
        }else{
            a[i][j]=a[i][j+1]+n;
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");
  }  
}