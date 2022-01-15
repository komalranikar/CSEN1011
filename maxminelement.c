#include <stdio.h>
#define N 10
int main(){
  int a[N],i;
  for(i=0;i<N;i++){
    printf("Enter the element of index %d:-",i);
    scanf("%d",&a[i]);
  }
  int max,min;
  max=a[0];
  min=a[0];
  for(i=1;i<N;i++){
  	if(a[i]>max){
  		max=a[i];
	  }
	if(a[i]<min){
		min=a[i];
	}
  }
  printf("%d is the maximum element of the given array.\n",max);
  printf("%d is the minimum element of the given array.",min);
}

/*output

Enter the element of index 0:-2
Enter the element of index 1:-4
Enter the element of index 2:-3
Enter the element of index 3:-54
Enter the element of index 4:-54
Enter the element of index 5:-43
Enter the element of index 6:-67
Enter the element of index 7:-454
Enter the element of index 8:-34
Enter the element of index 9:-3
454 is the maximum element of the given array.
2 is the minimum element of the given array.
*/