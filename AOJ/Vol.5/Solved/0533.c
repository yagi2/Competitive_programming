#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>

int main(void)
{
  int W[10];
  int K[10];
  int Wpon, Kpon;
  int i;

  memset(W,0,sizeof(W));
  memset(K,0,sizeof(K));

  for (i = 0;i <= 20;i++){
    if (i < 10){
      scanf("%d", &W[i]);
    }
    else if (i > 10){
      scanf("%d", &K[i-9]);
    }
  }

  sort(W.begin(), W.end());
  sort(K.begin(), K.end());

  for (i = 0;i < 10;i++){
    printf("%d %d\n", W[i], K[i]);
  }

  Wpon = W[9] + W[8] + W[7];
  Kpon = K[9] + K[8] + K[7];

  printf("%d %d\n", Wpon, Kpon);

  return 0;
}
