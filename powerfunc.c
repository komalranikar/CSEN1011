/*program to find power of a number.
1.Start.
2.include stdio as well as math header file.
3.make a function name power and input base and exponent from user.
4.by using power function do pow(i,j) and print the value.
5.make main() function to call power() function.
6.stop.
*/
#include <stdio.h>
#include <math.h>
int power(){
	int i,j,p
	;
	printf("enter your base = ");
	scanf("%d",&i);
	printf("enter your exponent = ");
	scanf("%d",&j);
	p=pow(i,j);
	printf("your calculated power value is-- %d",p);
}

int main(){
	power();
}
/*Output:-
enter your base = 2
enter your exponent = 3
your calculated power value is-- 8
*/

