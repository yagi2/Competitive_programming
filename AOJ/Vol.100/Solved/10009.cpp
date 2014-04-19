#include<iostream>
#include<iomanip>

#define PI 3.14159265358979323846264338327950288

using namespace std;

int main(void){
  double r,S,ar;

  cin >> r;

  S = r*r*PI;
  ar = 2*PI*r;

  cout << setprecision(6) << setiosflags(ios::fixed) << r*r*PI << ' ';
  cout << setprecision(6) << setiosflags(ios::fixed) << (2*r)*PI << endl;

  return 0;
}
