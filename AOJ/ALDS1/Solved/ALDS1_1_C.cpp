#include <cstdio>
#include <cmath>

int main()
{
    int N ,cnt;
    int prime;
    bool flag;

    cnt = 0;

    scanf(" %d", &N);

    for (int i = 0; i < N; i++){
        scanf (" %d", &prime);

        if (prime == 2 || prime == 3){
            cnt++;
        }
        else if (prime % 2 != 0){
            for (int j = 2; j <= sqrt(prime); j++){
                if (prime % j == 0){
                    flag = false;
                    break;
                }
                if (prime % j != 0){
                    flag = true;
                }
            }
            if (flag == true){
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}
