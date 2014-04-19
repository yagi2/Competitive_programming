#include<stdio.h>

int main(void)
{
  int n;
  int p, d1, d2;
  int i;
  int sum, max, mnum;

  while (1){
    scanf("%d", &n);

    if (n == 0){
      break;
    }

    for (i = 0;i < n;i++){
      scanf("%d %d %d", &p, &d1, &d2);

      // if (d1 != d2){
        sum = d1 + d2;
        if (i == 0){
          max = sum;
          mnum = p;
        }
        else {
          if (max < sum){
            max = sum;
            mnum = p;
          }
        }
    }

    printf("%d %d\n", mnum, max);
  }

  return 0;
}
            
