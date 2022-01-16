#include<stdio.h>
int main(){
  int num,i,binary,decimal=0,a=1,rem;
  scanf("%d\n",&num);
  for(i=0;i<num;i++){
    scanf("%d",binary);
  }
  
  while(binary!=0){
    rem=binary%10;
    decimal=decimal+rem*a;
    binary=binary/10;
    a=a*2;
  }
  printf("%d",decimal);
}