#include <stdio.h>
int main(){
  int i,j,m,n;
  char a,k;
  scanf("%d %d %d %d",&i,&j,&m,&n);
  if((i+j)%2==0){
    a='w';
  }
  else{
    a='b';
  }
  if((m+n)%2==0){
    k='w';
  }
  else{
    k='b';
  }
  if(a==k){
    printf("True");
  }
  else{
    printf("False");
  }
}