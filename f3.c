#include<stdio.h>
int main()
{
    int i;
    struct customer
    {
        char name[15];
        int amount;
        int mobile_number[10];
        
    }c1,c2;

scanf("%s",c1.name);
scanf("%d",&c1.amount);
for(i=1;i<=10;i++)
{
scanf("%d",&c1.mobile_number[i]);
}
if(i<10)
{
    printf("invalide phone number");
}
if(c1.amount<0 || c2.amount<0)
{
    printf("invalid amount");
}
else
{
    printf("%d",c1.amount);
}
c2.amount=c1.amount;
printf("total amount = %d ",c1.amount+c2.amount);
return 0;
}