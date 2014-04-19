#include<iostream>
#include<string>

using namespace std;

int main(void){
  string str,left,right;
  int i,j=0,m,h,len;
	
  while(1){
    cin >> str;
    if(str=="-"){
      break;
    }
		
    for(cin >> m;m!=0;m--){
      cin >> h;
			
      left = str.substr(0,h);
      right = str.substr(h,str.size());
      
      str = right + left;

    }
		
    cout << str << endl;
		
  }
	
  return 0;
	
}
