#include<iostream>

using namespace std;

int main(void){
  int a,b,d,r;
  float f;

  cin >> a >> b;

  d = a / b;
  r = a % b;
  f = (float)a/b;

  cout << d << ' ' << r << ' ' << f << endl;

  return 0;
}
