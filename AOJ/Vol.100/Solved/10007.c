#include<stdio.h>

int main(void){
  int x, y, tmp;
	
  while(1){
    scanf("%d %d",&x, &y);
    if(x==0&&y==0){
      break;
    }else{
      if(x>y){
	tmp = y;
	y = x;
	x = tmp;
      }
    }
    printf("%d %d\n",x, y);
  }
	
  return 0;
}
