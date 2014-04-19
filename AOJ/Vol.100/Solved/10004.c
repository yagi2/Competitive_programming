#include<stdio.h>

int main(void){
  int tmp;
  int one, two, three;
	
  scanf("%d %d %d",&one, &two, &three);
	
  if(one>two){
    tmp = two;
    two = one;
    one = tmp;
  }
  if(two>three){
    tmp = three;
    three = two;
    two = tmp;
  }
  if(one>two){
    tmp = two;
    two = one;
    one = tmp;
  }
	
  printf("%d %d %d\n",one, two, three);
	
  return 0;
}
