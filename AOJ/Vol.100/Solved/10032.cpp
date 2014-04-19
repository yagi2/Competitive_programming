#include<iostream>
#include<string>

using namespace std;

int main(void){
  string color,dir;
  int i=0;
	
  while(1){
    cin >> dir;
		
    if(dir=="quit"){
      break;
    }else if(dir=="push"){
      cin >> color[i];
      i++;
    }else if(dir=="pop"){
      i--;
      cout << color[i] << endl;
      color[i] = '\0';
    }
  }
	
  return 0;
}
