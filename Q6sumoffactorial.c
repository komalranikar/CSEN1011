/*Algorithm:
1. Start.
2. Input a number 'num'.
3. Initialize f=1,sum=0.
4. Check if num>=0 and num<10.
5. do f=f*i and sum=sum+f.
6. print sum.
7. if num>=10,then print Too big a number.
8. else print negative number.
9. Stop.
 */
#include<stdio.h>
int main(){
	int num,i,f=1,sum=0;
	scanf("%d",&num);
	if (num>=0 && num<10){
		for(i=1;i<=num;i++)
		{
			f=f*i;
			sum=sum+f;
		}
		printf("%d",sum);
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

7
5913

*/
