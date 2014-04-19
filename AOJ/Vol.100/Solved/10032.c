#include<stdio.h>
#include<string.h>

int main(void){
  char color[1000],dir[256];
  int i=0;
	
  memset(color,'\0',sizeof(color));
  memset(dir,'\0',sizeof(dir));
	
  while(1){
    scanf("%s",dir);
		
    if(!strcmp(dir,"quit")){
      break;
    }else if(!strcmp(dir,"push")){
      scanf(" %c",&color[i]);
      i++;
    }else if(!strcmp(dir,"pop")){
      i--;
      printf("%c\n",color[i]);
      color[i] = '\0';
    }
		
    memset(dir,'\0',sizeof(dir));
		
  }
	
  return 0;
	
}
