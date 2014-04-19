#include<stdio.h>
#include<math.h>

#define PI 3.141592653589793

int main(void){
  int a,b,dig,use;
  double S,L,h,c;
  double cost,sint,rad;
	
  scanf("%d %d %d",&a,&b,&dig);
	
  rad = dig*PI/180.0;
	
  c = (a*a)+(b*b)-(2*a*b*cos(rad));
  c = sqrt(c);
	
  L = a + b + c;
	
  S = (a*b*sin(rad))/2;
  h = (S*2) / a;
	
  printf("%lf\n",S);
  printf("%lf\n",L);
  printf("%lf\n",h);
	
  return 0;
	
}
