#include<cstdio>
#include<iostream>

using namespace std;

bool jud[10000000];
int main(void){
  int n1,n2,count=0,input;
  int i;

  scanf("%d",&n1);

  for(i=0;i<n1;i++){
    scanf("%d",&input);
    jud[input] = true;
  }

  scanf("%d",&n2);

  for(i=0;i<n2;i++){
    scanf("%d",&input);
    if(jud[input]==true){
      count++;
    }
  }

  printf("%d\n",count);

  return 0;
}
