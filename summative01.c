#include <stdio.h>
int main(){
    char string[100];
    scanf("%s",string);
    int i=0,lower=0,upper=0,numbers=0,special=0;
    while(string[i]!='\0'){
        if(string[i]=='_'||string[i]=='@'||string[i]=='%'||string[i]=='#'||string[i]=='$'){
            if(i==0){
              printf("Invalid password");
              return 0;}
            else{
              special+=1;}
          }
        else if(string[i]>='a' && string[i]<='z'){
          lower+=1;}
        else if(string[i]>='A' && string[i]<='Z'){
          upper+=1;}
        else if(string[i]>='0' && string[i]<='9'){
          numbers+=1;}
        i+=1;
    }
    if(lower>0 && upper>0 && numbers>0 && special>0 && i>=8 && i<=12){
      printf("Accepted");}
    else{
      printf("Invalid password");}
}