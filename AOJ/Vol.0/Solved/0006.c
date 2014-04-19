#include<stdio.h>


int main(void){
  int i;
  char str[21];
	
  for(i=0;i<21;++i){
    str[i] = '\0';
  }
	
  scanf("%s",&str);
	
  for(i=20;i>=0;--i){
    if(str[i]!='\0'){
      printf("%c",str[i]);
    }
  }
  printf("\n");
	
  return 0;
}
