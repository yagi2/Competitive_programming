#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(void){
  float x1,y1,x2,y2;
  float x,y,in;
  float dis;
	
  cin >> x1 >> y1 >> x2 >> y2;
	
  cout << setprecision(8) << setiosflags(ios::fixed) << sqrt(((x1 - x2)*(x1 - x2))+((y1 - y2)*(y1 - y2))) << endl;
	
  return 0;
	
}
