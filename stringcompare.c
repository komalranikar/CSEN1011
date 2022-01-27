#include <stdio.h>
#include <string.h>
#define LENGTH 10
int main(void){
  int value;
  char s1[LENGTH]={"gitam"},s2[LENGTH]={"gitam"};
  value=strcmp(s1,s2);
  //printf("%d",value);
  if(value==0){
    printf("strings are same");
  }
  else{
    printf("strings are not same");
  }
}