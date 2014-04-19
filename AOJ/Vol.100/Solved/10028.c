#include<stdio.h>
#include<string.h>

int main(void){
  int i,j,tmp;
  int n,x[1000];
	
  memset(x,0,sizeof(x));
	
  scanf("%d",&n);
	
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
  }
	
  for(i=0;i<n-1;i++){
    for(j=n-1;j>i;j--){
      if(x[j-1]>x[j]){
	tmp = x[j];
	x[j] = x[j-1];
	x[j-1] = tmp;
      }
    }
  }
	
  for(i=0;i<n;i++){
    if(i==n-1){
      printf("%d\n",x[i]);
    }else{
      printf("%d ",x[i]);
    }
  }
	
  return 0;

}
