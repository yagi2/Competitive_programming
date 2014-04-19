#include<stdio.h>

int main(void){
  unsigned long long int n, fact;
	
  scanf("%llu", &n);
	
  fact = n * (n-1);
  n = n-2;
	
  while(n>1){
    fact = fact * n;
    n = n--;
  }
	
  printf("%llu\n", fact);
	
  return 0;
	
}
