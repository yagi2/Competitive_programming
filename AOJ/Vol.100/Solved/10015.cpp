#include<iostream>
#include<string>

using namespace std;

int main(void){
  int i,j,n,num;
  string pic;
  bool card[4][13]={false};

  cin >> n;

  for(i=0;i<n;i++){
    cin >> pic >> num;
    
    if(pic=="S"){
      card[0][num-1] = true;
    }else if(pic=="H"){
      card[1][num-1] = true;
    }else if(pic=="C"){
      card[2][num-1] = true;
    }else if(pic=="D"){
      card[3][num-1] = true;
    }
  }

  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(card[i][j]==false){
	if(i==0){
	  cout << "S" << " " << j+1 << endl;
	}else if(i==1){
	  cout << "H" << " " << j+1 << endl;
	}else if(i==2){
	  cout << "C" << " " << j+1 << endl;
	}else if(i==3){
	  cout << "D" << " " << j+1 << endl;
	}
      }
    }
  }

  return 0;
}
