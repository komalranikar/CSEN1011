# include <stdio.h>
# define SIZE 5
int main(void){
  int list_of_integers[SIZE];  
  int element; 
  printf("Enter integers: ");
  
  for (int i=0; i<SIZE; i++)
    scanf("%d", &list_of_integers[i]);

  printf("\nThe elements in the list are ...");
  for (int i=0; i<SIZE; i++)
    printf("%d\t", list_of_integers[i]);
  
  printf("\nEnter the element to be searched: ");
  scanf("%d", &element);

  for (int i=0; i<SIZE; i++)
    if (element == list_of_integers[i]) {
      printf("\nThe element is found at index %d\n", i);
      return 0;
    }

  printf("\nThe element is not found\n");
  return 0;
}