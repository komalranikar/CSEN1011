/*Program to calculate Simple Interest and Compound interest*/

#include <stdio.h>

int main() 
{
	int p,r,t;
	printf("Enter your principle:--\n");
	scanf("%d",&p);
	printf("Enter your rate of interest:--\n");
	scanf("%d",&r);
	printf("Enter your time period:--\n");
	scanf("%d",&t);
	
	printf("Your calculated Simple Interest value is--%d\n",(p*r*t)/100);

	printf("Your calculated Compound Interest value is--%d\n",p*(1+r/100)*t));
	
}
