#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool q1[10000000];
int main(void){
  int n1,n2,count=0,input;
  int i;

  memset(q1,false,sizeof(q1));

  scanf("%d",&n1);

  for(i=0;i<n1;i++){
    scanf("%d",&input);
    q1[input] = true;
  }

  scanf("%d",&n2);

  
  for(i=0;i<n2;i++){
    scanf("%d",&input);
    if(q1[input]==true){
      count++;
    }
  }

  printf("%d\n",count);

  return 0;

}
