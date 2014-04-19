#include<stdio.h>

int main(void){
  unsigned long long int N;
  unsigned long long int fact;
  unsigned long long int i;

  fact = 1;

  scanf("%llu", &N);

  for (i = N;i > 0;i--){
    fact *= i;
  }

  printf("%llu\n", fact);

  return 0;
}
