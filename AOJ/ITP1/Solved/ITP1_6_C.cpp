#include <cstdio>

int main()
{
    int n, b, f, r, v;
    int count[4][3][10];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 10; k++){
                count[i][j][k] = 0;
            }
        }
    }

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf(" %d %d %d %d", &b, &f, &r, &v);
        count[b-1][f-1][r-1] += v;
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 10; k++){
                if (k != 9){
                    printf(" %d", count[i][j][k]);
                }
                else {
                    printf(" %d\n", count[i][j][k]);
                }
            }
        }
        if (i != 3){
            printf("####################\n");
        }
    }

    return 0;
}
