#include<stdio.h>
#include<string.h>

int main(void){
  char str[256],left[256],right[256];
  int i,j=0,m,h,len;
	
  memset(str,'\0',sizeof(str));
  memset(left,'\0',sizeof(left));
  memset(right,'\0',sizeof(right));
	
  while(1){
    scanf("%s",str);
    if(!strcmp(str,"-")){
      break;
    }
		
    for(scanf("%d",&m);m!=0;m--){
      scanf("%d",&h);
			
      strncpy(left,str,h);
      len = strlen(str);
			
      for(i=h;i<len;++i){
	right[j] = str[i];
	j++;
      }
			
      strcat(right,left);
      strcpy(str,right);
			
      j = 0;
      memset(left,'\0',sizeof(left));
      memset(right,'\0',sizeof(right));
    }
		
    printf("%s\n",str);
		
    memset(str,'\0',sizeof(str));
  }
	
  return 0;
	
}
