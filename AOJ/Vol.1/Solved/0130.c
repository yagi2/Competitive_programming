#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    int now, start, end;
    int i, j;
    char input[2000];
    char train[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%s", input);

        now = 500;
        start = 500;
        end = 500;
        
        for (j = 0; ; j += 3){
            train[now] = input[j];
            
            if (input[j + 1] == '\0'){
                break;
            }
            
            if (input[j + 1] == '-'){
                now++;
            }
            else {
                now--;
            }

            if (now < start){
                start = now;
            }
            if (now > end){
                end = now;
            }
        }

        for (j = start; j <= end; j++){
            printf("%c", train[j]);
        }
        
        printf("\n");

    }

    return 0;
}
        
