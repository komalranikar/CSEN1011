#include <stdio.h>
void main()
{
int b,g,i,bp=1,j,gp=1;
printf("Enter number of girls : ");
scanf("%d",&g);
printf("Enter number of boys : ");
scanf("%d",&b);
for(i=1;i<=b;i++){bp=bp*i;}
for(j=b+1;j>=(b-g+1);j--){gp=gp*j;}
printf("TOTAL: %d\n\n",(bp*gp));
}