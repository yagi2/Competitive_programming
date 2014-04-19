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
    bool ly[3000];
    bool flag;
    bool put;
    int i;
    int a, b;

    memset(ly, false, sizeof(ly));

    for (i = 1; i < 3001; ++i){
        if ((i % 4) == 0){
            if ((i % 100) == 0){
                if ((i % 400) == 0){
                    ly[i] = true;
                }
            }else {
                ly[i] = true;
            }
        }
    }
    
    put = false;

    while (1){
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0){
            break;
        }

        flag = false;

        if (put == true){
            printf("\n");
        }

        for (i = a; i <= b; ++i){
            if (ly[i] == true){
                printf("%d\n", i);
                flag = true;
            }
        }

        if (flag == false){
            printf("NA\n");
        }
        
        put = true;
        
    }

    return 0;  

}
