/*
Develop a C program to convert upper-case character to a lower-case character & vice-versa.
It should display a message "Incorrect data" if a non-character is given as input.

Algorithm:-
1. 1. Start.
2. Input a character "a".
3. Check if num<=90 and num>=65,then print (a+32) value.
4. Else if num<=122 and num>=97,then print (a-32) value.
5. Else print "Incorrect data".
6.Stop.
*/

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

/*
Output:-
A
a
*/
