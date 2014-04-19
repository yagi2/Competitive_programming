#include<stdio.h>

int main(void){
  int w, lbill, tbill, set, cho;
	
  lbill = 4280;
	
  while(1){
    scanf("%d",&w);
    if(w==-1){
      break;
    }else if(w<=10){
      tbill = 1150;
      set = lbill - tbill;
      printf("%d\n",set);
    }else if(w>10 && w<=20){
      cho = 125*(w-10);
      tbill = 1150 + cho;
      set = lbill - tbill;
      printf("%d\n",set);
    }else if(w>20 && w<=30){
      cho = (125*10)+((w-20)*140);
      tbill = 1150 + cho;
      set = lbill - tbill;
      printf("%d\n",set);
    }else if(w>30){
      cho = (125*10)+(140*10)+((w-30)*160);
      tbill = 1150 + cho;
      set = lbill - tbill;
      printf("%d\n",set);
    }
  }
	
  return 0;
	
}
