#include<iostream>

using namespace std;

int main(void){
  int i, n;
  int p;

  cin >> n;

  p = n;

  for(i=0;i<2;i++){
    p *= n;
  }

  cout << p << endl;

  return 0;
}
