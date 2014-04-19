#include<stdio.h>
#include<string.h>

int main(void)
{
    int i, j, k, l;
    int n, dk;
    int source;
    int day;
    int count, kumi;

    scanf("%d %d", &n, &dk);

    int resday[n];
    int tmp[n];

    memset(resday,0,sizeof(resday));

    for (i = 0;i < dk;i++){
        scanf("%d %d", &day, &source);
        resday[day - 1] = source;
    }

    j = 1;
    for (i = 0;i < n;i++){
        tmp[i] = j;
        if (j == 3){
            j = 0;
        }
        j++;
    }

    for (i = 0;i < n;i++){
         printf("%d\n", tmp[i]);
    }

    return 0;
}
