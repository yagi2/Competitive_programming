/* サイズ大きいとforで回すとTLEする 30点取り */
#include <stdio.h>

int main(void){
    unsigned long long int a, b, i, j, cnt, tmp;

    scanf("%llu %llu", &a, &b);

    cnt = 0;
    tmp = 0;
   
    for (i = a; i <= b; i++){
        if (i > 10){
            j = i;
            while(1){
                tmp = j % 10;
                j /= 10;
                if (tmp == 4 || tmp == 9){
                    cnt++;
                    break;
                }
                if (j == 0){
                    break;
                }
            }
        }
        else {
            if (i == 4 || i == 9){
                cnt++;
            }
        }
    }

    printf("%llu\n", cnt);
    
    return 0;
}
