/*Given an integer n, return whether every rotation of n is prime.

Algorithm
01. Start
02. Accept an integer 'n'
03. Count the number of digits in n (counter).
04. Repeat the following counter times.
05. If n is composite display "False" and stop
    Else digit = n%10, n1 = n/10, n = n1 + digit *power(10, counter) 
06. If we reached this step it means all numbers are prime.
07. Display "True".
08. Stop. */
# include <stdio.h>
# include <math.h>
int main(void){
  int i,n,j, number_of_digits=0, temp;
  scanf("%d", &n);
	temp = n;
while (temp != 0){
    ++number_of_digits;
    temp /=10;
  }
  	for(i = 1; i<=number_of_digits; i++) {
    
    for(j=2; j<=n/2; j++) {
      if (n%j == 0) {
        printf("False\n");
        return 0;
      }
    }
    temp = n % 10;
    n /= 10;
    n += temp * pow(10, number_of_digits-1);  
  }
  printf("True\n");
  return 0;
}

