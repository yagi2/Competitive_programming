#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int R, C;
    int sx, sy;
    int gx, gy;
    int i, j;

    scanf("%d %d", &R, &C);
    scanf("%d %d", &sx, &sy);
    scanf("%d %d", &gx, &gy);

    char MAP[R][C];
    int INTMAP[R][C];

    memset(MAP, '\0', sizeof(MAP));
    memset(INTMAP, 0, sizeof(INTMAP));

    for (i = 0; i < R; i++){
        scanf("%s", &MAP[i]);
    }
    
    sx--; sy--; gx--; gy--;
    
    for (i = 0; i < R; i++){
        for (j = 0; j < C; j++){
            if (MAP[i][j] == '#'){
                INTMAP[i][j] = -1;
            }
        }
    }

    for (i = sy; i < R; i++){
        for (j = sx; j < C; j++){
        }
    }

    /* debug */
/*
    for (i = 0; i < R; i++){
        for (j = 0; j < C; j++){
            printf("%c", MAP[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < R; i++){
        for (j = 0; j < C; j++){
            printf("%3d", INTMAP[i][j]);
        }
        printf("\n");
    }
*/
    return 0;
}
