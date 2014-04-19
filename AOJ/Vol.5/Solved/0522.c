#include<stdio.h>
#include<string.h>

int main(void)
{
  int i;
  int len;
  int joi, ioi;
  char str[100000];

  memset(str,'\0',sizeof(str));

  while (scanf("%s", str) != EOF){
  
	joi = 0;
	ioi = 0;
	
	len = strlen(str);

	for (i = 0;i < len - 2;i++){
	  if (str[i] == 'J' && str[i+1] == 'O' && str[i+2] == 'I'){
		joi++;
	  }
	  if (str[i] == 'I' && str[i+1] == 'O' && str[i+2] == 'I'){
		ioi++;
	  }
	}

	memset(str,'\0',sizeof(str));

	printf("%d\n%d\n", joi, ioi);
  }

  return 0;
}
