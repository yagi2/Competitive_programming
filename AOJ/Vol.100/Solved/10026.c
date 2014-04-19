#include<stdio.h>
#include<math.h>

int main(void){
  int i,n,score;
  double sumsq=0,ave,a,sum=0;
	
  while(1){
    scanf("%d",&n);
		
    if(n==0){
      break;
    }
		
    for(i=0;i<n;i++){
      scanf("%d",&score);
      sum += score;
      sumsq += (score*score);
    }
		
    ave = sum/n;
    a = sqrt(sumsq/n - ave*ave);
		
    printf("%lf\n",a);
		
    sum = 0;
    sumsq = 0;
    ave = 0;
    a = 0;
		
  }
	
  return 0;

}
