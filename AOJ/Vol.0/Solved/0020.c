#include<stdio.h>
#include<string.h>

int main(void){
  char cap[1001];
  int i, strl;
	
  scanf("%[^\n]",cap);
	
  strl = strlen(cap);
	
  for(i=0;i<=strl;++i){
    if(cap[i]<='z' && cap[i]>='a'){
      cap[i] = cap[i]-0x20;
    }
  }
	
  printf("%s\n",cap);
	
  return 0;
}
