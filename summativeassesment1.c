//Develop a C program to convert upper-case character to a lower-case character & vice-versa.
//It should display a message "Incorrect data" if a non-character is given as input.

#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if (a<=90 &&a>=65)
	{
		printf("%c",(a+32));
	}
	else if(a<=122 && a>=97)
	{
		printf("%c",(a-32));
	}
	else
	{
		printf("Incorrect data");
	}
}

//Develop a C program to find factorial of a number.  If the given number is more than 10,
// it should display "Too big a number". 
// If the number is negative, it should display "Negative Number".
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

//Develop a C program to act as a calculator using Switch statement.
//The input should be of the form operand-1, operand-2 and an operator. 
// In case of any invalid operator the output should be "Invalid Operator".

#include<stdio.h>
int main(){
	char op;
	int num1,num2,result;
	scanf("%d %d %c",&num1,&num2,&op);
	switch(op)
	{
		case '+':
			result=num1+num2;
			printf("%d",result);
			break;
		case'-':
			result=num1-num2;
			printf("%d",result);
			break;
		case'*':
			result=num1*num2;
			printf("%d",result);
			break;
		case'/':
			result=num1/num2;
			printf("%d",result);
			break;
		case'%':
			result=num1%num2;
			printf("%d",result);
			break;
		default:
			printf("Invalid operator");
}
}

//Develop a C program to display nth term of a Fibonacci Series.  (up to 20th term).
#include<stdio.h>
int main(){
	int n,t1=0,t2=1,nextTerm=0,i;
	scanf("%d",n);
	if(n==0){
		printf("%d",n);
	}
	else if(n==1){
		printf("%d",n-1);
	}
	else
	{
		nextTerm=t1+t2;
		for(i=3;i<=n;++i)
		{
			t1=t2;
			t2=nextTerm;
			nextTerm=t1+t2;
		}
	printf("%d",t2);
	}
}
