#include <cstdio>

long long int num[20000000];
int main()
{
    int N;
    scanf(" %d", &N);

    long long int tmp, max = -999999999;
    long long int prev = 1000000001;

    for (int i = 0; i < N; i++){
        scanf(" %lld", &num[i]);
    }

    max = 0;
    for (int i = 1; i <  N; i++){
        if (prev <= num[i]){
            continue;
        }
        for (int j = i + 1; j < N; j++){
            tmp = num[j] - num[i];
            if (max < tmp){
                max = tmp;
            }
        }
        prev = num[i];
    }

    // printf("%llu\n", prev);

    printf("%lld\n", max);

    return 0;
}
