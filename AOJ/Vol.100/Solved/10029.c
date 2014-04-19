#include<cstdio>
#include<stdlib.h>

int compare_int(const void *a,const void *b){
  return *(int*)a-*(int*)b;
}

int x[1000000];
int main(void){
  int i,n;
	
  scanf("%d",&n);
	
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
  }
	
  qsort(x,n,sizeof(int),compare_int);
	
  for(i=0;i<n;i++){
    if(i==n-1){
      printf("%d\n",x[i]);
    }else{
      printf("%d ",x[i]);
    }
  }
	
  return 0;
	
}
