#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(void){
  int i;  
  string str;

  getline(cin,str);
 
  for(i=0;i<str.size();i++){
    if(islower(str[i])){
      str[i] = toupper(str[i]);
    }else if(isupper(str[i])){
      str[i] = tolower(str[i]);
    }
  }

  cout << str << endl;

  return 0;
}
