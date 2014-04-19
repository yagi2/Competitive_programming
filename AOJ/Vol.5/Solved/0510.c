#include<stdio.h>

int main(void)
{
  int Ai, Am, As, Ae;
  int Bi, Bm, Bs, Be;
  int Asum, Bsum;

  scanf("%d %d %d %d", &Ai, &Am, &As, &Ae);
  scanf("%d %d %d %d", &Bi, &Bm, &Bs, &Be);

  Asum = Ai + Am + As + Ae;
  Bsum = Bi + Bm + Bs + Be;

  if (Asum > Bsum){
    printf("%d\n", Asum);
  }
  else if (Asum < Bsum){
    printf("%d\n", Bsum);
  }
  else if (Asum == Bsum){
    printf("%d\n", Asum);
  }

  return 0;
}
