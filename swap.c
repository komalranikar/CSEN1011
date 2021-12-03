# include <stdio.h>
int main() {
    int a=3, b=4;
    
    printf("Before Swapping\n");
    printf("a=%d  b=%d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After Swapping\n");
    printf("a=%d  b=%d\n", a, b);   
    return 0;
}
