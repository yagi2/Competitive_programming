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
    int year, month, day;

    while (scanf("%d %d %d", &year, &month, &day) != EOF){

        if (year < 1868){
            printf("pre-meiji\n");
        }

        if (year == 1868){
            if (month <= 9){
                if (month < 9){
                    printf("pre-meiji\n");
                }
                else if (month == 9){
                    if (day < 8){
                        printf("pre-meiji\n");
                    }
                    else {
                        printf("meiji %d %d %d\n", year - 1867, month, day);
                    }
                }
            }
            else {
                printf("meiji %d %d %d\n", year - 1867, month, day);
            }
        }

        if (year > 1868 && year < 1912){
            printf("meiji %d %d %d\n", year - 1867, month, day);
        }

        if (year == 1912){
            if (month <= 7){
                if (month < 7){
                    printf("meiji %d %d %d\n", year - 1867, month, day);
                }
                else if (month == 7){
                    if (day < 30){
                        printf("meiji %d %d %d\n", year - 1867, month, day);
                    }
                    else { 
                        printf("taisho %d %d %d\n", year - 1911, month, day);
                    }
                }
            }
            else {
                printf("taisho %d %d %d\n", year - 1911, month, day);
            }
        }

        if (year > 1912 && year < 1926){
            printf("taisho %d %d %d\n", year - 1911, month, day);
        }

        if (year == 1926){
            if (month <= 12){
                if (month < 12){
                    printf("taisho %d %d %d\n", year - 1911, month, day);
                }
                else if (month == 12){
                    if (day < 25){
                        printf("taisho %d %d %d\n", year - 1911, month, day);
                    }
                    else {
                        printf("showa %d %d %d\n", year - 1925, month, day);
                    }
                }
            }
            else {
                printf("showa %d %d %d\n", year - 1925, month, day);
            }
        }
        
        if (year > 1926 && year < 1989){
            printf("showa %d %d %d\n", year - 1925, month, day);
        }

        if (year == 1989){
            if (month <= 1){
                if (month < 1){
                    printf("showa %d %d %d\n", year - 1925, month, day);
                }
                else if (month == 1){
                    if (day < 8){
                        printf("showa %d %d %d\n", year - 1925, month, day);
                    }
                    else {
                        printf("heisei %d %d %d\n", year - 1988, month, day);
                    }
                }
            }
            else {
                printf("heisei %d %d %d\n", year - 1988, month, day);
            }
        }

        if (year > 1989){
            printf("heisei %d %d %d\n", year - 1988, month, day);
        }
    }

    return 0;
}
