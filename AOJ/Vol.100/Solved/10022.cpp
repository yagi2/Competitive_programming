#include<iostream>
#include<string>

using namespace std;
int main(void){
  string find,tmp,word;
  int i,len,count=0;
	
  cin >> find;
	
  while(1){
    cin >> word;
    if(word=="END_OF_TEXT"){
      break;
    }
		
    len = word.size();
		
    if(word[0]=='"'){
      tmp = word;
      word = "0";
      for(i=0;i<len-2;++i){
	word[i] = tmp[i+1];
      }
      tmp = "0";
    }
		
    if(word[len-1]=='.'){
      word[len-1] = '\0';
    }
		
    for(i=0;i<len;++i){
      if(isupper(word[i])){
	word[i] = tolower(word[i]);
      }
    }
		
    if(word==find){
      count++;
    }
		
    word = "0";
		
  }
		
	
  cout << count << endl;
	
  return 0;
	
}
