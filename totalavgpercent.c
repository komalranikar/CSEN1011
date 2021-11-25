/*program to enter marks of 5 subjects and calculate total,average,percentage of marks*/
#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	int total,avg,percent;
	printf("Enter marks of mathematics--\n");
	scanf("%d",&a);
	printf("Enter marks of english--\n");
	scanf("%d",&b);
	printf("Enter marks of science--\n");
	scanf("%d",&c);
	printf("Enter marks of social studies--\n");
	scanf("%d",&d);
	printf("Enter marks of cs--\n");
	scanf("%d",&e);
	total=a+b+c+d+e;
	avg=total/5;
	percent=(total*100)/500;
	printf("Your total is--%d\n",total);
	printf("Your average is--%d\n",avg);
	printf("Your percentage is--%d\n",percent);
	
}
