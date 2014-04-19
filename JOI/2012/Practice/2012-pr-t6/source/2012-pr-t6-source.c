#include<stdio.h>
#include<string.h>

int main(void){
  int N;
  int i, j;
  int len;
  char name[256];

  memset(name,'\0',sizeof(name));

  scanf("%d", &N);

  for (i = 0;i < N;i++){
    scanf("%s", name);

    len = strlen(name);

    for (j = 0;j < len;j++){
      if (name[j] >= 'A' && name[j] <= 'Z'){
        name[j] += 32;
      }
    }
  
    printf("%s\n",name);

    memset(name,'\0',sizeof(name));
  }

  return 0;
}
