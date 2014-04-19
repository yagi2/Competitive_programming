#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int x[1000000];
int main(void){
  int i,n;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
  }

  sort(x,x+n);

  for(i=0;i<n;i++){
    if(i==n-1){
      printf("%d\n",x[i]);
    }else{
      printf("%d ",x[i]);
    }
  }

  return 0;
}
