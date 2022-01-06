//using function print even and odd numbers in a given range.
/*
ALGORITHM:-
1.Start.
2.make function using name evenodd() under the function take input of 1st and last number of range.
3.use for(i=a;i<=b;i++)
4. under the given for loop do r=i%2 to get the remainder of the number i 
5.if r==0 then print the number "i" is even.
6.else if r==1 then print the number "i" is odd.
7.create main() function under which we call evenodd() function.
8.Stop.
*/

#include<stdio.h>
int evenodd()
{	int r,i,a,b;
	printf("Enter the first number of your range:--");
	scanf("%d",&a);
	printf("Enter the last number of your range:--");
	scanf("%d",&b);
	for(i=a;i<=b;i++){
		r=i%2;
		if (r==0){
			printf("%d is even\n",i);
		}
		else if(r==1){
			printf("%d is odd\n",i);
		}
		}
	}


int main(){
	evenodd();
}

/*Output:--
Enter the first number of your range:--1
Enter the last number of your range:--10
1 is odd
2 is even
3 is odd
4 is even
5 is odd
6 is even
7 is odd
8 is even
9 is odd
10 is even
*/
