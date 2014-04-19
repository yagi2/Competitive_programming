#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void){
  int i,n;
  vector<int> x;

  cin >> n;

  for(i=0;i<n;i++){
    x.push_back(i);
    cin >> x[i];
  }

  sort(x.begin(),x.end());

  for(i=0;i<n;i++){
    if(i==n-1){
      cout << x[i] << endl;
    }else{
      cout << x[i] << " ";
    }
  }

  return 0;
}
