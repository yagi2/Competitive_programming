#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    int i, j;
    int count_f, count_r;
    int len;
    char snake[256];

    scanf("%d", &n);

    for (i = 0;i < n;i++){
        memset(snake,'\0',sizeof(snake));
        count_f = count_r = 0;

        scanf("%s", snake);

        if (snake[1] == 62){
            if (snake[2] == 39){
                if (snake[3] == 61){
                    for(j = 3;;j++){
                        if (snake[j] == 61){
                            count_f++;
                        }
                        else {
                            break;
                        }
                    }
                    if (snake[j] == 35){
                        for (j = j + 1;;j++){
                            if (snake[j] == 61){
                                count_r++;
                            }
                            else {
                                break;
                            }
                        }
                        if (count_f == count_r){
                            len = strlen(snake);
                            if (snake[len - 1] == 126){
                                printf("A\n");
                                fflush(stdout);
                            }
                            else {
                                printf("NA\n");
                                fflush(stdout);
                            }
                        }
                        else {
                            printf("NA\n");
                            fflush(stdout);
                        }
                    }
                    else {
                        printf("NA\n");
                        fflush(stdout);
                    }
                }
                else {
                    printf("NA\n");
                    fflush(stdout);
                }
              
            }
            else if (snake[2] == 0x5E){
            }
            else {
                printf("NA\n");
                fflush(stdout);
            }
        }
        else {
            printf("NA\n");
            fflush(stdout);
        }
    }

    return 0;
}
