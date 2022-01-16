#include<stdio.h>
#include<math.h>
int main(){
	int n,r,i=0,d=0,l1;
	printf("Enter the number of bits:");
	scanf("%d",&l1);
	printf("Enter a binary number:");

		scanf("%d",&n);
	while(n!=0){
		r=n%10;
		n=n/10;
		d=d+r*pow(2,i);
		i++;
	}
	printf("%d",d);
	return 0;
}