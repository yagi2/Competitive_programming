#include <stdio.h>

int main(void)
{
    unsigned long long int N, ans;
    int i;

    ans = 3;

    scanf("%llu", &N);

    for (i = 0; i < N - 1; ++i){
        ans *= 3;
    }
    printf("debug %llu\n", ans);

    printf("%llu\n", ans%100000);

    return 0;
}
