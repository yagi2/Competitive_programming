#include<iostream>
#include<vector>

using namespace std;

int main(void){
  int n,i;
  vector<int> a;

  cin >> n;

  for(i=0;i<n;i++){
    a.push_back(i+1);
    cin >> a[i];
  }

  for(i=n-1;i>=0;i--){
    if(i==0){
      cout << a[i];
    }else{
      cout << a[i] << " ";
    }
  }

  cout << endl;

  return 0;
}
