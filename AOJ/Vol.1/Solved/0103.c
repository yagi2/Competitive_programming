#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    int i;
    int score, out;
    int base;
    char event[256];
    
    memset(event, '\0', sizeof(event));

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        score = 0;
        out = 0;
        base = 0;

        while (1){
            scanf("%s", event);

            if (strcmp(event, "HOMERUN") == 0){
                score += base + 1;
                base = 0;
            }
            if (strcmp(event, "HIT") == 0){
                if (base < 3){
                    base++;
                }
                else {
                    score++;
                }
            }
            if (strcmp(event, "OUT") == 0){
                    out++;
            }

            if (out == 3){
                break;
            }
        
            memset(event, '\0', sizeof(event));
           
        }

        printf("%d\n", score);
    }

    return 0;
}
