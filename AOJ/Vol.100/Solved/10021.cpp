#include<iostream>
#include<string>

using namespace std;

int main(void){
  int i,j,n;
  string top,word;

  cin >> n;
	
  for(i=0;i<n;++i){
    cin >> word;
    if(i==0){
      top = word;
    }else{
      if(top>word){
	top = word;
      }
    }	
  }
	
  cout << top << endl;

  return 0;

}
