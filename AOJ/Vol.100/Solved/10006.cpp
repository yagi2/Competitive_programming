#include<iostream>

using namespace std;

int main(void){
  int count=1,n;

  while(1){
    cin >> n;

    if(n==0){
      break;
    }

    cout << "Case" << ' ' << count << ':' << ' ' << n << endl;

    count++;
  }

  return 0;
}
