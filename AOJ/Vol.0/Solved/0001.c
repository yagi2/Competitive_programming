#include<stdio.h>

int main(void){
  int i, max=0, mid=0, min=0, mount;
	
  for(i=0;i<10;i++){
    scanf("%d", &mount);
		
    if(mount>max){
      min = mid;
      mid = max;
      max = mount;
    }else if(mount>mid){
      min = mid;
      mid = mount;
    }else if(mount>min){
      min = mount;
    }
  }
	
  printf("%d\n",max);
  printf("%d\n",mid);
  printf("%d\n",min);
	
  return 0;
}
