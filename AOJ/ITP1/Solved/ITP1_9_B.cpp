#include <cstdio>
#include <cstring>

int main(void)
{
    int n, shuffle;
    char str[500];
    char tmp;
    
    while (true){
        for (int i = 0; i < 500; i++){
            str[i] = '\0';
        }

        scanf(" %s", str);
        if (!strcmp(str, "-")){
            break;
        }

        scanf(" %d", &n);
        for (int i = 0; i < n; i++){
            scanf(" %d", &shuffle);
            for (int j = 0; j < shuffle; j++){
                tmp = str[0];
                for (int k = 0; k < strlen(str) - 1; k++){
                    str[k] = str[k+1];
                }
                str[strlen(str)-1] = tmp;
            }
        }

        printf("%s\n", str);
    }

    return 0;
}
                    
