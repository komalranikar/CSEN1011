#include <stdio.h>
main(){
	int a,b,i,r;
	b=0;
	scanf("%d",&a);
	for (i=1;i<=(a-1);i++){
		r=a%i;
		if (r==0)
		b+=i;
	}
	if (a==b){
	printf("its a perfect no.");
	}
	else{
		
	printf("not a perfect no.");
	}
}
	
		
		

