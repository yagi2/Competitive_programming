#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(void){
  int i,n,score;
  double sumsq=0,ave,a,sum=0;
	
  while(1){
    cin >> n;

    if(n==0){
      break;
    }
		
    for(i=0;i<n;i++){
      cin >> score;
      sum += score;
      sumsq += (score*score);
    }
		
    ave = sum/n;
    a = sqrt(sumsq/n - ave*ave);
		
    cout << a << endl;
		
    sum = 0;
    sumsq = 0;
    ave = 0;
    a = 0;
		
  }
	
  return 0;
}
