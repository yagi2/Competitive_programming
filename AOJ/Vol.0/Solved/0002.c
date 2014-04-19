#include<stdio.h>

int main(void){
  int a, b, wa, keta;
	
  keta = 0;
	
  while(scanf("%d %d", &a, &b)!=EOF){
    keta = 0;
		
    wa = a+b;
		
    if(wa==0){
      keta++;
    }else{
      while(wa!=0){
	wa = wa/10;
	keta++;
      }
    }
    printf("%d\n",keta);
  }
  return 0;
}
