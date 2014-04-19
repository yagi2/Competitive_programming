// include
// ----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

// repetition
// ----------------------------------------------------------------------------
#define FOR(i, a, b) for (i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

// memory clear
// ----------------------------------------------------------------------------
#define CLRNUM(a) memset((a), 0, sizeof(a))
#define CLRBOOL(a, flag) memset((a), flag, sizeof(a))
#define CLRCHAR(a) memset((a), '\0', sizeof(a))

// debug
// ----------------------------------------------------------------------------
#define DEBUGINT(x) printf("%d\n", x);
#define DEBUGFLOAT(x) printf("%f\n", x);
#define DEBUGCHAR(x) printf("%c\n", x);
#define DEBUGSTR(x) printf("%s\n", x);
#define DEBUGFORINT(i, a, b, x) FOR(i, a, b){ printf("%d ", x[i]); }
#define DEBUGFORFLOAT(i, a, b,x ) FOR(i, a, b){ printf("%f ", x[i]); }
#define DEBUGFORCHAR(i, a, b, x) FOR(i, a, b){ printf("%c ", x[i]); }
#define DEBUGREPINT(i, n, x) REP(i, n){ printf("%d ", x[i]); }
#define DEBUGREPFLOAT(i, n, x) REP(i, n){ printf("%f ", x[i]); }
#define DEBUGREPCHAR(i, n, x) REP(i, n){ printf("%c ", x[i]); }

// other
// ----------------------------------------------------------------------------
#define PUTNL printf("\n")

// constant
// ----------------------------------------------------------------------------
#define INF 1000000000

int main(void)
{
    char map[100][100];
    int i, j;
    int px, py;
    bool flag;

    while (scanf("%s", map[0]) != EOF){

        flag = false;

        for (i = 1; i < 8; i++){
            scanf("%s", map[i]);
        }

        for (i = 0; i < 8; ++i){
            for (j = 0; j < 8; ++j){
                if (map[i][j] == '1'){
                    py = i;
                    px = j;
                    flag = true;
                    break;
                }
            }
            if (flag == true){
                break;
            }
        }
        
        if (map[py][px] == '1' && map[py][px + 1] == '1' && map[py + 1][px] == '1' && map[py + 1][px + 1] == '1'){
            printf("A\n");
        }
        
        else if (map[py][px] == '1' && map[py + 1][px] == '1' && map[py + 2][px] == '1' && map[py + 3][px] == '1'){
            printf("B\n");
        }
        
        else if (map[py][px] == '1' && map[py][px + 1] == '1' && map[py][px + 2] == '1' && map[py][px + 3] == '1'){
            printf("C\n");
        }
        
        else if (map[py][px] == '1' && map[py + 1][px - 1] == '1' && map[py + 1][px] == '1' && map[py + 2][px - 1] == '1'){
            printf("D\n");
        }
        
        else if (map[py][px] == '1' && map[py][px + 1] == '1' && map[py + 1][px + 1] == '1' && map[py + 1][px + 2] == '1'){
            printf("E\n");
        }
        
        else if (map[py][px] == '1' && map[py + 1][px] == '1' && map[py + 1][px + 1] == '1' && map[py + 2][px + 1] == '1'){
            printf("F\n");
        }
        
        else if (map[py][px] == '1' && map[py][px + 1] == '1' && map[py + 1][px - 1] == '1' && map[py + 1][px] == '1'){
            printf("G\n");
        }
    }
    
    return 0;
}
    
