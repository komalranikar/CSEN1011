#include <stdio.h> 
int main(){
  int N,i,j;
  scanf("%d",&N);
  int a[N];
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  
  int x,s;
  scanf("%d",&x);
  int low=0,high=N-1,mid;
  int c=-1;
  while(low<=high){
    mid=(low+high)/2;
    if (a[mid]==x){
      return a[mid];
      printf("%d",c);
      break;
    }
    else if(x<a[mid]){
      c=a[mid];
      high=mid-1;
      printf("%d",c);
      break;
    }
    else if(x<a[0]){
      printf("%d",a[0]);
      break;
    }
    else if(x>a[N-1]){
      s=N-1;
      printf("%d",a[s]);
      break;
    }
    else{
      low=mid+1;
      printf("%d",c);
      break;
    }

  }
 
}
