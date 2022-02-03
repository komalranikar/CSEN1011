#include <stdio.h>
int sumofn(int n){
  if(n!=0){
    return n+sumofn(n-1);
  }
  else{
    return n;
  }
}

int main(){
  int num;
  scanf("%d",&num);
  printf("sum=%d",sumofn(num));
  return 0;
}