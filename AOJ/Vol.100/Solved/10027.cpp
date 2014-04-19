#include<iostream>
#include<string>

using namespace std;

int main(void){
  string ctaro,chana;
  int n,taro=0,hana=0;
	
  for(cin >> n;n!=0;n--){
    cin >> ctaro >> chana;

    if(ctaro>chana){
      taro += 3;
    }else if(ctaro<chana){
      hana += 3;
    }else if(ctaro==chana){
      taro++;
      hana++;
    }
  }
  cout << taro << " " << hana << endl;
	
  return 0;
	
}
