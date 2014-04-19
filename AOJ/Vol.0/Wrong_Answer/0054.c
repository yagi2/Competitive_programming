// include
// ----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
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
#define DEBUGFORNUM(i, a, b, x) FOR(i, a, b){ printf("%d ", x[i]); }
#define DEBUGFORCHAR(i, a, b, x) FOR(i, a, b){ printf("%c ", x[i]); }
#define DEBUGREPNUM(i, n, x) REP(i, n){ printf("%d ", x[i]); }
#define DEBUGREPCHAR(i, n, x) REP(i, n){ printf("%c ", x[i]); }

// other
// ----------------------------------------------------------------------------
#define PUTNL printf("\n")

// constant
// ----------------------------------------------------------------------------
#define INF 1000000000

int main(void)
{
    int i;
    unsigned long long int a, b, n, s;
    double tmp;

    while (scanf("%llu %llu %llu", &a, &b, &n) != EOF){
        s = 0;
        tmp = (double)a / b;
        tmp -= (unsigned int)tmp;

        for (i = 0; i < n; ++i){
            tmp *= 10;
            s += (unsigned int)tmp;
            tmp -= (unsigned int)tmp;
        }

        printf("%llu\n", s);
    }

    return 0;
}
