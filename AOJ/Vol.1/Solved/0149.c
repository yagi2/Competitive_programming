#include<stdio.h>

int main(void){
  double l, r;
  int la=0, ra=0, lb=0, rb=0, lc=0, rc=0, ld=0, rd=0;
	
  while(scanf("%lf %lf",&l, &r)!=EOF){
    if(l>=1.1){
      la++;
    }else if(l<1.1 && l>=0.6){
      lb++;
    }else if(l<0.6 && l>=0.2){
      lc++;
    }else if(l<0.2){
      ld++;
    }
    if(r>=1.1){
      ra++;
    }else if(r<1.1 && r>=0.6){
      rb++;
    }else if(r<0.6 && r>=0.2){
      rc++;
    }else if(r<0.2){
      rd++;
    }
  }
	
  printf("%d %d\n",la, ra);
  printf("%d %d\n",lb, rb);
  printf("%d %d\n",lc, rc);
  printf("%d %d\n",ld, rd);
		
  return 0;
}
