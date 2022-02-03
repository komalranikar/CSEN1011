#include<stdio.h>
int lcm(int a,int b){
  static int common=0;
  common+=b;
  if(common%a==0)
  return common;
  else
  return lcm(a,b);
}
int main(){
  int n1,n2,result;
  scanf("%d %d",&n1,&n2);
  if(n1<n2){
  result=lcm(n1,n2);}
  else {
  result=lcm(n1,n2);}
  printf("lcm=%d",result);
  return 0;
}