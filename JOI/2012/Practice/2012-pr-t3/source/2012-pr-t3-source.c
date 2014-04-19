#include<stdio.h>

int main(void)
{
  int i;
  int n;
  int a_score, b_score;
  int a_win, b_win;

  a_win = b_win = 0;

  scanf("%d", &n);

  for (i = 0;i < n;i++){
    scanf("%d %d", &a_score, &b_score);

    if (a_score > b_score){
      a_win++;
    }
    else if (a_score < b_score){
      b_win++;
    }
  }

  printf("%d %d\n", a_win, b_win);

  return 0;
}
