#include<stdio.h>

int main(void){
  int x, i;
	
  for(i=1;;++i){
    scanf("%d",&x);
    if(x==0){
      break;
    }else{
      printf("Case %d: %d\n",i, x);
    }
  }
	
  return 0;
}
