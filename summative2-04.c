#include<stdio.h>
#include<math.h>
int main(){
    int n,decimal=0;
    scanf("%d",&n);
    int arr[n],i=0;
    while(i<n){
    scanf("%d",&arr[i]);
    i+=1;
    }
    int j=0;
    while(j<n){
        decimal=decimal+arr[j]*pow(2,n-j-1);
        j+=1;
    }
    printf("%d",decimal);
}
/*output
5
1
0
1
1
0
22
*/