#include<iostream>
#include<string>

using namespace std;

int main(void){
  string x;
  int i,sum=0;

  while(1){
    cin >> x;
    
    if(x=="0"){
      break;
    }

    for(i=0;i<x.size();i++){
      sum += x[i] - '0';
    }

    cout << sum << endl;
    sum =0;

  }

  return 0;
}
