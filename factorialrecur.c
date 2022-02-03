#include<stdio.h>
long int fact(int n){
  if(n>=1){
    return n*fact(n-1);
  }
  else{
    return 1;
  }
}
int main(){
  int n;
  scanf("%d",&n);
  printf("factorial=%ld",fact(n));
  return 0;
}