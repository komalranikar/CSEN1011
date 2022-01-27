#include <stdio.h>
#include <string.h>
#define LENGTH 10
int main(void){
  char s1[LENGTH];
  printf("Enter a string: ");
  scanf("%s",s1);
  printf("Length of the string is %u\n",strlen(s1));
  return 0;
}