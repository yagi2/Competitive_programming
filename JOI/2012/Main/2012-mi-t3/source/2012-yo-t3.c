#include<stdio.h>

int compare_int(const void *a,const void *b){
  return *(int*)b-*(int*)a;
}

int main(void)
{
    int i;
    int n;
    int base, topp;
    int basecal, tpcalsum, culsum;
    int mon;

    scanf("%d", &n);

    int toppcal[n];

    scanf("%d %d", &base, &topp);

    scanf("%d", &basecal);

    for (i = 0;i < n;i++){
        scanf("%d", &toppcal[i]);
    }

    qsort(toppcal,n,sizeof(int),compare_int);

    tpcalsum = 0;

    for (i = 0;i < topp;i++){
        tpcalsum += toppcal[i];
    }

    culsum = tpcalsum + basecal;
    mon = base + (topp * (n - 1));

    mon = culsum / mon;

    printf("%d\n", mon);

    return 0;
}
        
