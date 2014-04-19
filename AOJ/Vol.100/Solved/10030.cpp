#include<iostream>
#include<vector>

using namespace std;

int main(void){
  int n1,n2;
  int i,j;
  int count=0;
  vector<int> q1,q2;

  cin >> n1;

  for(i=0;i<n1;i++){
    q1.push_back(i);
    cin >> q1[i];
  }

  cin >> n2;

  for(i=0;i<n2;i++){
    q2.push_back(i);
    cin >> q2[i];
  }

 
  for(i=0;i<n2;i++){
    for(j=0;j<n1;j++){
      if(q2[i]==q1[j]){
	count++;
	break;
      }
    }
  }

  cout << count << endl;

  return 0;
}
