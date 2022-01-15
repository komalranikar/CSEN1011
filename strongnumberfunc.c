#include<stdio.h>
int factorial(int r){
	
	int fact=1;
	while(r>1){
		fact=fact*r;
		r--;
	}
}

int check(int n){
	int temp,rem,result=0;
	temp=n;
	while(temp){
		rem=temp%10;
		result=result+factorial(rem);
		temp=temp/10;
	}
	if (result==n)
		return 1;
	else
		return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	if (check(n)==1){
		printf("%d is strong number",n);
	}
	else{
		printf("%d is not a strong number.",n);
	}
}

/*output

145
145 is strong number

*/