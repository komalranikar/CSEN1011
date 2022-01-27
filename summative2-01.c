#include<stdio.h>
int main(){
    int u,y,o,p;
    scanf("%d",&u);
    int k[u];
    int i=0;
    while(i<u){
        scanf("%d",&k[i]);
        i=i+1;
    }
    scanf("%d",&y);
    i=0;
    while(i<u){
        if(k[i]==y){
            printf("%d",y);
            return 0;
        }
        else if(y>=k[u-1]){
            printf("%d",k[u-1]);
            return 0;
        }
        else if(y<k[0]){
            printf("%d",k[0]);
            return 0;
        }
        else if(y>k[i] && y<k[i+1]){
            printf("%d",k[i+1]);
            return 0;
        }
        i=i+1;
    }
}
/*output:-
5
12
32
32
45
65
43
45
*/