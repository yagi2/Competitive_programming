#include<iostream>
#include<string>

using namespace std;

int main(void){
  int i,num;
  char ch;
  int count[26]={0};

  while(cin >> ch){
    if(ch>='A' && ch<='Z'){
      ch += 0x20;
    }
    num = ch-'a';
    count[num]++;
  }

  ch = 'a';

  for(i=0;i<26;i++){
    cout << ch << " : " << count[i] << endl;
    ch++;
  }

  return 0;
}
