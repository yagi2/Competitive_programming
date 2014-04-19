#include <stdio.h> 

int main(void){
  unsigned long long int x; 
  unsigned long long int N; 
  unsigned long long int m;
  unsigned long long int pow; 

  x = 3;
  m = 100000;

  scanf("%llu", &N);

  x %= m;

  for (pow = 1 ; N > 0 ; N = N / 2){                          
    if (N % 2 != 0){         
      pow = (pow * x) % m;   
    }
    
    x = (x * x) % m;          
  }
  
  printf("%llu\n", pow);   

  return 0;
}

