#include <cstdio>

int main()
{
    int n, sum;

    while (true){
        int cnt = 0;

        scanf(" %d %d", &n, &sum);
        if (n == 0 && sum == 0){
            break;
        }

        for (int i = 1; i <= n - 2; i++){
            for (int j = i + 1; j <= n - 1; j++){
                for (int k = j + 1; k <= n; k++){;
                    if (i + j + k == sum){
                        cnt++;
                    }
                }
            }
        }
        
        printf("%d\n", cnt);
    }
    
    return 0;
}
        
