# include <stdio.h> # include <stdio.h>
int main() {
    char ch;
    
    printf("Enter a character : ");
    scanf("%c", &ch);

    if (ch  <= 90 && ch >= 65)
      printf("Changed case of %c is %c\n", ch, ch+32);
    else
      printf("Changed case of %c is %c\n", ch, ch-32);
       
    return 0;
}
