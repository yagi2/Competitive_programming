#include<stdio.h>
#include<string.h>

int p[999999];

int main(void){
  int i,j,n,count=0;
	
  memset(p,0,sizeof(p));
  p[0] = 1;
	
  for(i=2;i<=999999;++i){
    for(j=2;i*j<=999999;++j){
      if(p[i*j-1]==0){
	p[i*j-1] = 1;
      }
    }
  }
	
  while(~scanf("%d",&n)){
    for(i=0;i<n;++i){
      if(p[i]==0){
	count++;
      }
    }
    printf("%d\n",count);
    count = 0;
  }
	
  return 0;
	
}
