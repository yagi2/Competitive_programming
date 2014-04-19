#include<stdio.h>

int main(void){
  int a, b;
  char op;
	
	
  while(1){
    scanf("%d ",&a);
    scanf("%c ",&op);
    scanf("%d",&b);
		
    if(op==63){
      break;
    }else if(op==43){
      printf("%d\n",a+b);
    }else if(op==45){
      printf("%d\n",a-b);
    }else if(op==42){
      printf("%d\n",a*b);
    }else if(op==47){
      printf("%d\n",a/b);
    }
  }
	
  return 0;
}
