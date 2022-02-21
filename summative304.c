#include <stdio.h>
struct height{
    int feets;
    int inches;
};
void sumofheights(struct height h1,struct height h2){
    struct height h3;
    h3.feets=h1.feets+h2.feets;
    h3.inches= h1.inches+h2.inches;
    h3.feets=h3.feets+h3.inches/12; 
    h3.inches=h3.inches%12;
    printf("%d %d",h3.feets,h3.inches);}
int main(){
    struct height h1,h2;
    scanf("%d%d%d%d",&h1.feets,&h1.inches,&h2.feets,&h2.inches);
    sumofheights(h1,h2);
    return 0;}