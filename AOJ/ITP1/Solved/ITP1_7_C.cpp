#include <cstdio>

int main()
{
    int r, c, tmp;
    scanf("%d %d", &r, &c);
    int lst[r+1][c+1];

    for (int i = 0; i <= r; i++){
        for (int j = 0; j <= c; j++){
            lst[i][j] = 0;
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf(" %d", &lst[i][j]);
        }
    }

    
    for (int i = 0; i <= r; i++){
        for (int j = 0; j <= c; j++){
            if (i < r && j < c){
                lst[i][c] += lst[i][j];
                lst[r][j] += lst[i][j];
            }
            else {
                lst[r][c] += lst[i][j];
            }
        }
    }

    lst[r][c] /= 4;

    for (int i = 0; i <= r; i++){
        for (int j = 0; j <= c; j++){
            if (j != c){
                printf("%d ", lst[i][j]);
            }
            else {
                printf("%d\n",lst[i][j]);
            }
        }
    }

    return 0;
}

            
                
    
