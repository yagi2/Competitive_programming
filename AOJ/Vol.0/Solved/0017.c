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
    char str[1024];
    int i, j;
    int len;
    bool flag;

    memset(str, '\0', sizeof(str));

    while (fgets(str, sizeof(str), stdin) != NULL){
        flag = false;
        len = strlen(str);

        while (1){
            for (i = 0; i < len; ++i){
                if (str[i] == 't'){
                    if (str[i + 1] == 'h'){
                        if (str[i + 2] == 'e'){
                            flag = true;
                            break;
                        }
                        else if (str[i + 2] == 'i'){
                            if (str[i + 3] == 's'){
                                flag = true;
                                break;
                            }
                        }
                        else if (str[i + 2] == 'a'){
                            if (str[i + 3] == 't'){
                                flag = true;
                                break;
                            }
                        }
                    }
                }
            }
            
            if (flag == false){
                for (i = 0; i < len; ++i){
                    if (str[i] >= 'a' && str[i] <= 'z'){
                        if (str[i] == 'z'){
                            str[i] = 'a';
                        }
                        else {
                            str[i]++;
                        }
                    }
                }
            }
            else if (flag = true){
                printf("%s\n", str);
                break;
            }
        }
        
        memset(str, '\0', sizeof(str));

    }
    return 0;
                  
}
