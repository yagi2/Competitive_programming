#include<stdio.h>
#include<math.h>

int main(void){
  float x1,y1,x2,y2;
  float x,y,in;
  float dis;
	
  scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	
  x = x1 - x2;
  y = y1 - y2;
	
  x *= x;
  y *= y;
	
  in = x + y;
	
  dis = sqrt(in);
	
  printf("%f\n",dis);
	
  return 0;
	
}
