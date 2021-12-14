#include <stdio.h>
int main(){
	int a,r,rev;
	scanf("%d",&a);
	while(a!=0){
		rev=a%10;
		r=(r*10)+rev;
		a/=10;
	}
	printf("%d",r);
	return 0;
}
