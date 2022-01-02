/*Given a positive integer n, find the length of its Collatz sequence.

Algorithm:-
1.Start.
2.input a number n.
3.initialize sum=1.
4.while n not equal to 1 , do sum=sum=1
5. print sum.
6. stop.
*/
#include<stdio.h>
int main(){
	int n,sum=1;
	scanf("%d",&n);
	while(n!=1){
		if(n&1){
			n=3*n+1;
		}
		else{
			n=n>>1;
		}
	sum ++;
	}
	printf("%d",sum);
}

/*
Output

11
15

*/
