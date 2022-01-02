/*Develop a C program to act as a calculator using Switch statement.
The input should be of the form operand-1, operand-2 and an operator. 
In case of any invalid operator the output should be "Invalid Operator".

Algorithm:-

1. Start.
2. Input two numbers num1 & num2 .
3. Take two character c and result.
4. By using switch case do switch(op).
5. If the input of op is "+" , then do result=num1+num2 and print result.
6. If the input of op is "-" , then do result=num1-num2 and print result.
7. If the input of op is "*" , then do result=num1*num2 and print result.
8. If the input of op is "/" , then do result=num1/num2 and print result.
9. If the input of op is "%" , then do result=num1%num2 and print result.
10.If the input of op is something other then print "Invalid operator".
*/

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

/*

Output:-
12
13
*
156

*/
