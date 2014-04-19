#include<iostream>

using namespace std;

int main(void){
  int x,y;

  while(1){

    cin >> x >> y;

    if(x==0 && y==0){
      break;
    }

    if(x<y){
      cout << x << ' ' << y << endl;
    }else if(x>y){
      cout << y << ' ' << x << endl;
    }else if(x==y){
      cout << x << ' ' << y << endl;
    }

  }

  return 0;
}
