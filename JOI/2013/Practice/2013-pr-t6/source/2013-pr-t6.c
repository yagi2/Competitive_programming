#include <stdio.h>

int main(void){
    int N;
    char name[256][256];
    int i, j;
    
    scanf("%d", &N);

    for (i = 0; i < N; ++i){
        scanf("%s", name[i]);
    }

    for (i = 0; i < N; ++i){
        for (j = 0; name[i][j] != '\0'; ++j){
            if (name[i][j] >= 65 && name[i][j] <=90){
                name[i][j] += 32;
            }
        }
    }

    for (i = 0; i < N; ++i){
        printf("%s\n", name[i]);
    }

    return 0;
}
