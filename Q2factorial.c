/*Develop a C program to find factorial of a number.  If the given number is more than 10,
 it should display "Too big a number". 
 If the number is negative, it should display "Negative Number".

Algorithm:
1. Start.
2. Input a number 'num'.
3. Initialize f=1.
4. Check if num>=0 and num<10.
5. f=f*i.
6. print f.
7. if num>=10,then print Too big a number.
8. else print negative number.
9. Stop.
 */
#include<stdio.h>
int main(){
	int num,i,f=1;
	scanf("%d",&num);
	if (num>=0 && num<10){
		for(i=1;i<=num;i++)
		{
			f=f*i;
		}
		printf("%d",f);
	}
	else if(num>=10){
		printf("Too big a number");
	}
	else
	{
		printf("Negative Number");
	}
}

/*Output
8
40320
*/
