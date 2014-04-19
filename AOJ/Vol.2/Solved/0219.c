#include<stdio.h>
#include<string.h>

int main(void){
  int n, input, ice[10];
  int i, j;

  memset(ice,0,sizeof(ice));

  while(1){
    scanf("%d",&n);
    
    if(n==0){
	break;
    }
    
    for(i=0;i<n;i++){
      scanf("%d",&input);
      ice[input] += 1;
    }

    for(i=0;i<10;i++){
      for(j=0;j<=ice[i];j++){
	if(ice[i]==0){
	  printf("-");
	}else if(ice[i]==j){
	  break;
	}else{
	  printf("*");
	}
      }
      printf("\n");
    }

    memset(ice,0,sizeof(ice));
    
    n--;
  }

  return 0;

}
