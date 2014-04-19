#include<stdio.h>
#include<string.h>

int main(void){
  char sent[1001];
  int i;
	
  for(i=0;i<1000;++i){
    sent[i] = '\0';
  }
	
  scanf("%[^\n]",sent);
	
  for(i=0;sent[i]!='\0';++i){
    if((sent[i] == 'a') && (sent[i+1] == 'p') && (sent[i+2] == 'p') && (sent[i+3] == 'l') && (sent[i+4] == 'e')){
      sent[i+0] = 'p';
      sent[i+1] = 'e';
      sent[i+2] = 'a';
      sent[i+3] = 'c';
      sent[i+4] = 'h';
      i = i+4;
    }
    if((sent[i] == 'p') && (sent[i+1] == 'e') && (sent[i+2] == 'a') && (sent[i+3] == 'c') && (sent[i+4] == 'h')){
      sent[i+0] = 'a';
      sent[i+1] = 'p';
      sent[i+2] = 'p';
      sent[i+3] = 'l';
      sent[i+4] = 'e';
      i = i+4;
    }
  }
	
  printf("%s\n", sent);
	
  return 0;
}
