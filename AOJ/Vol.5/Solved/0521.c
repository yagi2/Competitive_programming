#include<stdio.h>

int main(void){
  int money;
  int n;

  n = 0;

  while (1){
    scanf("%d", &money);

    if (money == 0){
      break;
    }
  
    money = 1000 - money;

    if (money >= 500){
      n += money / 500;
      money %= 500;
    }
    if (money >= 100 && money < 500){
      n += money / 100;
      money %= 100;
    }
    if (money >= 50 && money < 100){
      n += money / 50;
      money %= 50; 
    }
    if (money >= 10 && money < 50){
      n += money / 10;
      money %= 10;
    }
    if (money >= 5 && money < 10){
      n += money / 5;
      money %= 5;
    }
  
    n += money;

    printf("%d\n", n);
    n = 0;
  }
   
  return 0;
}
