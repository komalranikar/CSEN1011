#include <stdio.h>
#include <string.h>
#define LENGTH 10
int main(void){
  char s1[LENGTH]={"gitam"},s2[LENGTH]={"vizag"};
  strcpy(s2,s1);
  printf("s2 = %s\n",s2);
  return 0;
}