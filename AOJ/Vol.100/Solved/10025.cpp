#include<iostream>
#include<iomanip>
#include<math.h>

#define PI 3.141592653589793

using namespace std;

int main(void){
  int a,b,dig,use;
  double S,L,h,c;
  double cost,sint,rad;
  
  cin >> a >> b >> dig;
	
  rad = dig*PI/180.0;
	
  c = (a*a)+(b*b)-(2*a*b*cos(rad));
  c = sqrt(c);
	
  L = a + b + c;
	
  S = (a*b*sin(rad))/2;
  h = (S*2) / a;
	
  cout << setprecision(8) << setiosflags(ios::fixed) << S << "\n" << L << "\n" << h << endl;

  return 0;
}
