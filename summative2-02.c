#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d",&a);
    int arr[a];
    int i=0;
    while(i<a){
        scanf("%d",&arr[i]);
        i+=1;
    }
    i=0;
    while(i<a){
        if(arr[0]<arr[i])
        d+=1;
        i+=1;
    }
    if(d==0){
        printf("0");
        return 0;
    }
    b=c=arr[0];
    int n=0;
     while(n<a){
         if(b<arr[n])
         b=arr[n];
         if(c>arr[n])
         c=arr[n];
         n+=1;
     }
     printf("%d",b-c);
}


/*output:-
6
7
10
5
8
11
9
6
*/