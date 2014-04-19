#include<stdio.h>
#include<string.h>

int main(void){
  int i,num,count[26];
  char ch;
	
  memset(count,0,sizeof(count));
	
  while(scanf("%c",&ch)!=EOF){
    if(ch>='A'&&ch<='Z'){
      ch += 0x20;
    }
    num = ch-'a';
    count[num]++;
  }
	
  for(i=0;i<26;++i){
    printf("%c : %d\n",i+97,count[i]);
  }
	
  return 0;

}
