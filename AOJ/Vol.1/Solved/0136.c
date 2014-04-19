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
    int n;
    int i, j;
    int list[6];
    double hight;

    scanf("%d", &n);

    memset(list, 0, sizeof(list));

    for (i = 0; i < n; ++i){
        scanf("%lf", &hight);
        
        if (hight < 165.0){
            list[0]++;
        }
        else if (hight >= 165.0 && hight < 170.0){
            list[1]++;
        }
        else if (hight >= 170.0 && hight < 175.0){
            list[2]++;
        }
        else if (hight >= 175.0 && hight < 180.0){
            list[3]++;
        }
        else if (hight >= 180.0 && hight < 185.0){
            list[4]++;
        }
        else if (hight >= 185.0){
            list[5]++;
        }
    }
    
    for (i = 0; i < 6; ++i){
        printf("%d:", i + 1);
        for (j = 0; j < list[i]; ++j){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}
