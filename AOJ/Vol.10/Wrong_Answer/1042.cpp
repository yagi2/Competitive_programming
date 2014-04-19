#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  int tmp;
  int length, ws;
  string num;

  while (1){
    getline(cin,num);

    if (num == "END OF INPUT"){
      break;
    }
    else{
      while (1){
	length = num.size();
	ws = num.find(" ");
	if (num.find(" ") == string::npos){
	  break;
	}
	cout << ws;
	num = num.substr(ws);
      }
      cout << endl;
    }
  }

  return 0;
}
