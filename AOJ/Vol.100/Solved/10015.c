#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void){
  int num,n,i,j;
  char pic[2];
  bool card[4][13];
	
  memset(card,false,sizeof(card));
	
  scanf("%d",&n);
  for(i=0;i<n;++i){
    scanf("%s %d",&pic[0],&num);
		
    if(!strcmp(pic,"S")){
      card[0][num-1] = true;
    }else if(!strcmp(pic,"H")){
      card[1][num-1] = true;
    }else if(!strcmp(pic,"C")){
      card[2][num-1] = true;
    }else if(!strcmp(pic,"D")){
      card[3][num-1] = true;
    }
  }
	
  for(i=0;i<4;++i){
    for(j=0;j<13;++j){
      if(card[i][j]==false){
	if(i==0){
	  printf("S ");
	}else if(i==1){
	  printf("H ");
	}else if(i==2){
	  printf("C ");
	}else if(i==3){
	  printf("D ");
	}
	printf("%d",j+1);
	printf("\n");
      }
    }
  }
	
  return 0;

}
