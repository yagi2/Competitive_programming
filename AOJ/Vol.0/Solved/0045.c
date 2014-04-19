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
#define DEBUGNUM(x) printf("%d\n", x);
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
    int sum, ave;
    int val, num;
    int count;

    sum = 0;
    ave = 0;
    count = 0;
    
    while (scanf("%d, %d", &val, &num) != EOF){
        sum += val * num;
        ave += num;
        count++;
    }
    
    if (((double)ave / count) - (ave / count) > 0.4){
        ave = ave / count + 1;
    }
    else {
        ave /= count;
    }
    
    printf("%d\n%d\n", sum, ave);

    return 0;
        
}
