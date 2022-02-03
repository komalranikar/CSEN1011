#include<stdio.h>
#include<string.h>
  int main(){
  char str1[100],str2[100];
  strcpy(str1,"Hello to ");
  strcpy(str2,"this world.");
  strcat(str1,str2);
  printf("%s",str1);
  return 0;
}
  /* safer versionof strcat is strncat.
  it appends the limited number of characters specified by the third argument passed to it.
  strncat automatically adds null character at the end of the resultant string.

*/


#include<stdio.h>
#include<string.h>
int main(){
  char str1[5],str2[100];
  strcpy(str1,"He");
  strcpy(str2,"llo!");
  strncat(str1,str2, sizeof(str1)-strlen(str1)-1);//here its calculating the remaining available memory.
  printf("%s",str1);
  return 0;
}