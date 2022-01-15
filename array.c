/*program to input elements of array and display the array. (without macro)*/
#include <stdio.h>
int main(){
  int a[10],i;
  for(i=0;i<10;i++){
    printf("Enter the element of index %d:-",i);
    scanf("%d",&a[i]);
  }
  printf("\n The elements of array are as follows:-");
  for(i=0;i<10;i++){
    printf("%d",a[i]);
    printf("\t");
  }
  return 0;
}
/*output:-
Enter the element of index 0:-12
Enter the element of index 1:-12
Enter the element of index 2:-14
Enter the element of index 3:-34
Enter the element of index 4:-21
Enter the element of index 5:-43
Enter the element of index 6:-12
Enter the element of index 7:-32
Enter the element of index 8:-21
Enter the element of index 9:-34

 The elements of array are as follows:-12   12  14  34  21  43  12  32 21   34
 */

 /*program to input elements of array and display the array. (with macro)*/
#include <stdio.h>
#define N 10
int main(){
  int a[N],i;
  for(i=0;i<N;i++){
    printf("Enter the element of index %d:-",i);
    scanf("%d",&a[i]);
  }
  printf("\n The elements of array are as follows:-");
  for(i=0;i<N;i++){
    printf("%d",a[i]);
    printf("\t");
  }
  return 0;
}

/*output
Enter the element of index 0:-12
Enter the element of index 1:-12
Enter the element of index 2:-122
Enter the element of index 3:-2323
Enter the element of index 4:-212
Enter the element of index 5:-133
Enter the element of index 6:-132
Enter the element of index 7:-2323
Enter the element of index 8:-211
Enter the element of index 9:-2332

 The elements of array are as follows:-12   12  122 2323    212 133 1322323 211 2332
 */