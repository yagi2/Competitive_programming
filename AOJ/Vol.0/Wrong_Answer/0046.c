#include<stdio.h>

int main(void){
  double max, min, hight, result;
	
  scanf("%lf",&hight);
	
  max = hight;
  min = hight;
	
  while(scanf("%lf",&hight)!=EOF){
    if(hight>max){
      max = hight;
    }else if(hight<min){
      min = hight;
    }
  }
	
  result = max - min;
	
  printf("%lf\n",result);
	
  return 0;
	
}
