#include<stdio.h>
#include<string.h>

int main(void){
  int i;
  char caesar[1001];
	
  scanf("%s",caesar);
	
  for(i=0;i<strlen(caesar);++i){
    if(caesar[i]>='D'&&caesar[i]<='Z'){
      caesar[i] = caesar[i]-0x03;
    }else{
      caesar[i] = caesar[i]-0x03+0x1A;
    }
  }
	
  printf("%s\n",caesar);

  return 0;
	
}
