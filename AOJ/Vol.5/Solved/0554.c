#include<stdio.h>

int main(void)
{
  int x, y;
  int TimeSum;
  int Time1, Time2, Time3, Time4;

  scanf("%d %d %d %d", &Time1, &Time2, &Time3, &Time4);

  TimeSum = Time1 + Time2 + Time3 + Time4;

  y = TimeSum % 60;
  x = (TimeSum - y) / 60;

  printf("%d\n%d\n", x, y);

  return 0;
}
