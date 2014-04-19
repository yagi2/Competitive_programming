#include<stdio.h>
#include<string.h>

int main(void){
  int i, tmp=0, x=0;
  int n[1001];
  char num[1001];
	
  while(1){
    scanf("%s",num);
		
    if(!strcmp(num,"0")){
      break;
    }else{
      for(i=0;i<strlen(num);++i){
	n[i] = num[i]-'0';
	x += n[i];
      }
    }
    printf("%d\n",x);
    x = 0;
  }
	
  return 0;
	
}
