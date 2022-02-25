#include <stdio.h>
int fact(int );
int main(){
    int g,b;
    scanf("%d%d",&g,&b);
    if((g+b)<=10){
    int n=fact(b)*fact(10-b);
    printf("%d",n);}
    else{printf("Invalid ");}
}
int fact(int a)
{   int i,factorial=1;
    for(i=1;i<=a;i++){
        factorial=factorial*i;}
    return factorial;
}