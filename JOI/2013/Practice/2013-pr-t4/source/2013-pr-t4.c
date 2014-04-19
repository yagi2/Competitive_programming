#include <stdio.h>

int main(void){
    unsigned long long int N;
    unsigned long long int i;

    scanf("%llu", &N);
    
    for (i = N - 1; i > 0; --i){
        N *= i;
    }

    printf("%llu\n", N);

    return 0;
}
