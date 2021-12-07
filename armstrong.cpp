# include <stdio.h>
int main(){
	int n1,r,n,s;
	scanf("%d",&n);
	s=0;
	n1=n;
	while(n!=0)
	{ 
		r=n%10;
		s+=(r*r*r);
		n=n/10;
	}
	if (n1==s)
	{
		printf("armstrong number");
	}
	else
	{ 
		printf("not armstrong number");
	}
}
	
	
