/*UNCONDITIONAL OPERATOR-GOTO
The goto statement is a jump statement which is sometimes also referred to as  unconditional jump statement. 
As the name suggests, goto is used to transfer the program control to a predefined label. 
The goto statment can be used to repeat some part of the code for a particular condition. 
It can also be used to break the multiple loops which can't be done by using a single break statement. 
However, using goto is avoided these days since it makes the program less readable and complicated.
The goto statement can be used to jump from anywhere to anywhere within a function.
Syntax:
Syntax1      |   Syntax2
----------------------------
goto label;  |    label:  
.        	 |       .
.       	 |       .
.            |       .
label:       |    goto label;

In the above syntax, the first line tells the compiler to go to or jump to the statement marked as a label. Here label is a user-defined identifier which indicates the target statement. The statement immediately followed after ‘label:’ is the destination statement. The ‘label:’ can also appear before the ‘goto label;’ statement in the above syntax.
 
 
 
Below are some examples on how to use goto statement;*/
 

//example1:C program to print 1 to 5 using while loop.
#include<stdio.h>
#include <stdio.h>
int main(){
	int i=1;
	while(i<6)
	{
		printf("%d\n",i);
		i++;
	}
}

//C program to print 1 to 5 using goto
#include<stdio.h>
int fff(){
	int i=1;
	beginning:
		if (i<6)
		{
			printf("%d\n",i);
			i++;
			goto beginning;
		}
}



//example2:c program to print numbers from 1 to n.

#include<stdio.h>
int man()
 {
  int n,i=1;

  printf("Enter the number:");
  scanf("%d",&n);

  start:
  printf("%d\t",i);
  i++;
  if(i<=n)goto start;

  return 0;
}



















/*Advantages of using goto statement:

The only advantage of using goto statement , you can alter the normal sequence of the program execution, 
so it gives the power to jump to any part of program



Disadvantages of using goto statement:
 It is always recommended not to use goto statement as this reduces the readability of the program. 
 It becomes difficult to trace the control flow of a program, making the program logic complex to understand . 
 Using goto statement is considered as poor programming practice*/
 

