#include<stdio.h>
int main()
{
	int c=0,n,i,s,j;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(s=1;s<n-i;s++)
			printf(" ");
			for(j=0;j<=i;j++)
			{
				if(j==0 || i==0)
				c=1;
				else
				c=c*(i-j+1)/j;
				printf("%d",c);
			}
			printf("\n\n");
	}
}
/*
Output:
Enter the number of rows: 6
     1
    1 1
   1 2 1
  1 3 3  1
 1 4  6  4 1
1 5 10 10 5 1
*/

/*
learnings

To use nested for loops.
*/
