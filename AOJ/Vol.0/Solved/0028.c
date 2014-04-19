#include<stdio.h>
#include<string.h>

int main(void)
{
    int i;
    int max, n, count;
    int num[100];
   
    memset(num,'0',sizeof(num));

    count = 0;
    max = 0;

    while(scanf("%d", &n) != EOF){
        num[n - 1]++;
        count++;
    }

    for (i = 0;i < count;i++){
        if (max < num[i]){
            max = num[i];
        }
    }

    for (i = 0;i < count;i++){
        if (max == num[i]){
            printf("%d\n", i + 1);
            fflush(stdout);
        }
    }

    return 0;
}

