#include<stdio.h>
#include<string.h>

int main(void){
  int i,j,n;
  char top[256],word[256];
	
  memset(word,'\0',sizeof(word));
  memset(top,'\0',sizeof(top));
	
  scanf("%d",&n);
	
  for(i=0;i<n;++i){
    scanf("%s",word);
    if(i==0){
      strcpy(top,word);
    }else{
      if(top[0]>=word[0]){
	if(top[0]==word[0]){
	  for(j=1;top[j]!='\0';++j){
	    if(top[j]>word[j]){
	      strcpy(top,word);
	      break;
	    }else if(word[j]=='\0'){
	      strcpy(top,word);
	      break;
	    }
	  }
	}else{
	  strcpy(top,word);
	}
      }
    }	
  }
	
  printf("%s\n",top);

  return 0;

}
