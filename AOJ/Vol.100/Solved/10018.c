#include<stdio.h>
#include<string.h>

int main(void){
  int i;
  char str[1048576];
	
  memset(str,'\0',sizeof(str));
	
  scanf("%[^\n]s",str);
	
  for(i=0;i<strlen(str);++i){
    if(str[i]>='A'&&str[i]<='Z'){
      str[i] = str[i]+0x20;
    }else if(str[i]>='a'&&str[i]<='z'){
      str[i] = str[i]-0x20;
    }
  }
	
  for(i=0;i<strlen(str);++i){
    printf("%c",str[i]);
  }
	
  printf("\n");
	
  return 0;

}
