#include<stdio.h>
#include<string.h>

int main(void)
{
    int i, j;
    int len;
    int ans;
    char str[256];
    char str_r[256];

    ans = 0;

    memset(str,'\0',sizeof(str));
    memset(str_r,'\0',sizeof(str_r));

    while (scanf("%s", str) != EOF){
        len = strlen(str);
        
        j = 0;
        for (i = len - 1;i >= 0;i--){
            str_r[j] = str[i];
            j++;
        }

        if (strcmp(str,str_r) == 0){
            ans++;
        }

        memset(str,'\0',sizeof(str));
        memset(str_r,'\0',sizeof(str_r));

    }

    printf("%d\n", ans);

    return 0;
}
