#include<stdio.h>

int main(void){
  int n,count=0;
  int i,j,k,l;
  int judge;
	
  while(~scanf("%d",&n)){
    for(i=0;i<10;++i){
      for(j=0;j<10;++j){
	for(k=0;k<10;++k){
	  for(l=0;l<10;++l){
	    if((i+j+k+l)==n){
	      count++;
	    }
	  }
	}
      }
    }
		
    printf("%d\n",count);
    count = 0;
  }
	
  return 0;
	
}
