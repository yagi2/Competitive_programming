#include<stdio.h>

int main(void){
  int n,i;
  int num[101];
	
  scanf("%d",&n);
	
  for(i=0;i<n;++i){
    scanf("%d",&num[i]);
  }
	
  for(i=n-1;i>=0;--i){
    printf("%d",num[i]);
    if(i!=0){
      printf(" ");
    }else if(i==0){
      printf("\n");
    }
  }
	
  return 0;
}
