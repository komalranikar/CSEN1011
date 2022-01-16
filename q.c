#include<stdio.h>
int main()
{
    int p,q,r,s=0;
    scanf("%d",&p);
    int m[p];
    int i=0;
    while(i<p){
        scanf("%d",&m[i]);
        i+=1;
    }
    i=0;
    while(i<p){
        if(m[0]<m[i])
        s+=1;
        i+=1;
    }
    if(s==0){
        printf("0");
        return 0;
    }
    q=r=m[0];
    int n=0;
     while(n<p){
         if(q<m[n])
         q=m[n];
         if(r>m[n])
         r=m[n];
         n+=1;
     }
     printf("%d",q-r);
}