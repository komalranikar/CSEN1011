#include <stdio.h> 
int main(){
  int N,i,j;
  scanf("%d",&N);
  int a[N];
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
      if(a[i]==a[j]){
        printf("%d\n",a[j]);
      }
    }
  }
}