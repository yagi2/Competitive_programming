#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void)
{
    unsigned long long int num, tmp;
    int n, ans, x;
    int dig[8];
    int i, j, k, l;

    scanf("%d", &n);

    for (i = 0;i < n;i++){
        scanf("%llu", &num);
        printf("Case %d:\n", i + 1);

        for (j = 0;j < 10;j++){
            ans = 0;
            num = pow(num,2);

            tmp = num;
            
            for (k = 0;k < 8;k++){
                dig[k] = tmp%10;
                tmp /= 10;
            }
            x = 1;
            
            for (l = 2;l < 6;l++){
                ans += dig[l] * x;
                x *= 10;
            }
            printf("%d\n", ans);
            num = ans;
        }
    }

    return 0;
}
