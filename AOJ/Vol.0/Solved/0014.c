#include<stdio.h>

int main(void){
  long long int d, sum=0;
  long long int i;
	
  while(scanf("%lld",&d)!=EOF){
    for(i=0;i<600;i+=d){
      sum += i*i*d;
    }
    printf("%lld\n",sum);
    sum = 0;
  }
	
  return 0;
}
