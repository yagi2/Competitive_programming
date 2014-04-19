#include<stdio.h>
#include<string.h>

int main(void){
  char find[256],tmp[256],word[256];
  int i,len,count=0;
	
  memset(find,'\0',sizeof(find));
  memset(word,'\0',sizeof(word));
  memset(tmp,'\0',sizeof(tmp));
	
  scanf("%s",find);
	
  while(1){
    scanf("%s",word);
    if(!strcmp(word,"END_OF_TEXT")){
      break;
    }
		
    len = strlen(word);
		
    if(word[0]=='"'){
      strcpy(tmp,word);
      memset(word,'\0',sizeof(word));
      for(i=0;i<len-2;++i){
	word[i] = tmp[i+1];
      }
      memset(tmp,'\0',sizeof(tmp));
    }
		
    if(word[len-1]=='.'){
      word[len-1] = '\0';
    }
		
    for(i=0;i<len;++i){
      if(word[i]>=65 && word[i]<=90){
	word[i] += 32;
      }
    }
		
    if(!strcmp(word,find)){
      count++;
    }
		
    memset(word,'\0',sizeof(word));
		
  }
		
	
  printf("%d\n",count);
	
  return 0;
	
}
