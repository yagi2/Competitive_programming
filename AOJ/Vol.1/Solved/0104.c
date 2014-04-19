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
    int H, W;
    int X, Y;
    int i, j;
    char tile[200][200];
    bool loop[200][200];

    while (1){
        scanf("%d %d", &H, &W);

        if (H == 0 && W == 0){
            break;
        }            

        CLRBOOL(loop, false);

        for (i = 0; i < H; ++i){
            scanf("%s", tile[i]);
        }

        X = 0;
        Y = 0;

        loop[0][0] = true;

        while (1){
            if (tile[Y][X] == '>'){
                X++;

                if (loop[Y][X] == true){
                    printf("LOOP\n");
                    break;
                }
                else {
                    loop[Y][X] = true;
                }
            }

            else if (tile[Y][X] == '<'){
                X--;
            
                if (loop[Y][X] == true){
                    printf("LOOP\n");
                    break;
                }
                else {
                    loop[Y][X] = true;
                }
            }
           
            else if (tile[Y][X] == '^'){
                Y--;
            
                if (loop[Y][X] == true){
                    printf("LOOP\n");
                    break;
                }
                else {
                    loop[Y][X] = true;
                }
            }

            else if (tile[Y][X] == 'v'){
                Y++;
                
                if (loop[Y][X] == true){
                    printf("LOOP\n");
                    break;
                }
                else {
                    loop[Y][X] = true;
                }
            }
           
            else if (tile[Y][X] == '.'){
                printf("%d %d\n", X, Y);
                break;
            }
        }
    }

    return 0;
}
