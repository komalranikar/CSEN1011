#include<stdio.h>
int power(int base,int a){
  if(a!=0){
    return (base*power(base,a-1));
  }
  else{
    return 1;
  }
}
int main(){
  int base,a,result;
  scanf("%d",&base);
  scanf("%d",&a);
  result=power(base,a);
  printf("result=%d",result);
  return 0;
}