#include<stdio.h>
int main(){
  char string[100];
  int i,k;
  gets(string);
  for(i=0;string[i]!='/0';++i){
    while(!(string[i]>="a"&&string[i]<="z"||(string[i]>="A"&&string[i]<="Z")||string[i]=='\0')){
      for(k=i;string[k]!='\0';++k){
        string[k]=string[k+1];
      }
      string[k]='\0';
      }
    }
    puts(string);
    return 0;
  }
