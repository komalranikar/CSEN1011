/*program to print the maximum of the two numbers.
1. start
2. make a function name max().
3. input two numbers 'num1' and 'num2'.
4. take a variable max.
5. if (num1>num2) , do max=num1 and print max.
6. else if (num2>num1),do max=num2 and print max.
7. make a main() function to call max() function.
8. stop.
*/
#include<stdio.h>
int max(){
	int num1,num2,max;
	printf("enter the first number:-");
	scanf("%d",&num1);
	printf("enter the second number:-");
	scanf("%d",&num2);
	if (num1>num2){
		max=num1;
	}
	else if(num2>num1){
		max=num2;
	}
	printf("maximum number among these two is--%d",max);
	}
int main(){
	max();
}

/*Output

enter the first number:-56
enter the second number:-78
maximum number among these two is--78

*/
