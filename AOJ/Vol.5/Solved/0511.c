#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(void){
  int i;
  int n, nstuo, nstut; 
  bool stu[30];

  memset(stu,false,sizeof(stu));

  for (i = 0;i < 28;i++){
    scanf("%d", &n);

    stu[n-1] = true;
  }

  for (i = 0;i < 30;i++){
    if (stu[i] == false){
      nstuo = i + 1;
      stu[i] = true;
      break;
    }
  }

  for (i = 0;i < 30;i++){
    if (stu[i] == false){
      nstut = i + 1;
      stu[i] = true;
      break;
    }
  }

  printf("%d\n%d\n", nstuo, nstut);

  return 0;
}
