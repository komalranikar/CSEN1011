# include <stdio.h>
# include <string.h>
int main(){
    struct book {
    int accessnum;
    char authorname[15];}
    num[2];
    for(int k=0;k<2;k++){
      scanf("%d",&num[k].accessnum);
      scanf("%s",num[k].authorname);}
    int j=strcmp(num[0].authorname,num[1].authorname);
    if(num[0].accessnum==num[1].accessnum&&j==0){
      printf("Same book");
      return 0;
    }
    if(num[0].accessnum==num[1].accessnum){
      printf("Same access number");}
    else if(j==0){
      printf("Same author");}
    else{
      printf("No match");}
    
}