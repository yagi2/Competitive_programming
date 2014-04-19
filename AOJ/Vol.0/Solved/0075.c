#include<stdio.h>

int main(void){
  int ans[101], i, a=0, j;
  int stnum;
  double weight, hight;
	
  for(i=0;i<=100;++i){
    ans[i] = 0;
  }
	
  while(scanf("%d,%lf,%lf",&stnum, &weight, &hight)!=EOF){
    if(weight/(hight*hight)>=25){
      ans[a] = stnum;
      a++;
    }
  }
	
  for(j=0;j<a;++j){
    printf("%d\n",ans[j]);
  }
	
  return 0;
}
