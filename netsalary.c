#include <stdio.h>
int main()
{
	int basic,da,hra,pf,it,net;
	printf("Enter the basic--\n");
	scanf("%d",&basic);
	printf("Enter the da--\n");
	scanf("%d",&da);
	printf("Enter the hra--\n");
	scanf("%d",&hra);
	printf("Enter the pf--\n");
	scanf("%d",&pf);
	printf("Enter the it--\n");
	scanf("%d",&it);
	printf("Calculated net salary is--%d\n ",(basic+da+hra)-(pf+it));
}
