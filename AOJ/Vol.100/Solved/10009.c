#include<stdio.h>

#define PI 3.14159265358979323846264338327950288

int main(void){
  double r;
	
  scanf("%lf",&r);
	
  printf("%lf ",r*r*PI);
  printf("%lf\n",(2*r)*PI);
	
  return 0;
}
