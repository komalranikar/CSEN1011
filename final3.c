#include<stdio.h> 
int main(){
  struct customer {
    char cname[15];
    int amountpaid;
    char mobno[10];
  }c[2];
  int a,k=0;
  for(a=0;a<2;a++){
    scanf("%s",c[a].cname);
    scanf("%d",&c[a].amountpaid);
    if(c[a].amountpaid<0){
    printf("Invalid amount");
    return 0;}
  scanf("%s",c[a].mobno);
  if(strlen(c[a].mobno)!=10){
    printf("Invalid mobile number");
    return 0;}
  while(c[a].mobno[k]!='\0'){
    if(c[a].mobno[k]>='0' && c[a].mobno[k]<='9'){
    k+=1;}
  else{
    printf("Invalid entry");
    return 0;}
    }}
  int s=c[0].amountpaid+c[1].amountpaid;
  printf("%d",s);}