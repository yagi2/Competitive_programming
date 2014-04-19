#include<stdio.h>

int main(void){
  int n1,n2;
  int i,j;
  int count=0;

  scanf("%d",&n1);

  int q1[n1];

  for(i=0;i<n1;i++){
    scanf("%d",&q1[i]);
  }

  scanf("%d",&n2);
 
  int q2[n2];

  for(i=0;i<n2;i++){
    scanf("%d",&q2[i]);
  }

 
  for(i=0;i<n2;i++){
    for(j=0;j<n1;j++){
      if(q2[i]==q1[j]){
	count++;
	break;
      }
    }
  }

  printf("%d\n",count);

  return 0;

}
