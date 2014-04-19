#include<stdio.h>
#include<string.h>

int main(void){
  char bl[256];
  int num;
  int A,B,O,AB;
	
  memset(bl,'\0',sizeof(bl));
  A = B = O = AB = 0;
	
	
  while(scanf("%d,%s",&num,bl)!=EOF){
    if(!strcmp(bl,"A")){
      A++;
    }else if(!strcmp(bl,"B")){
      B++;
    }else if(!strcmp(bl,"O")){
      O++;
    }else if(!strcmp(bl,"AB")){
      AB++;
    }
  }
	
  printf("%d\n%d\n%d\n%d\n",A,B,AB,O);
	
  return 0;

}
