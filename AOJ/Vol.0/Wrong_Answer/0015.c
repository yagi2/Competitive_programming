#include<stdio.h>
#include<string.h>

int main(void)
{
    int i, j;
    int n;
    int len;
    char str1, str2, str_sum;

    memset(str1,'\0',sizeof(str1));
    memset(str2,'\0',sizeof(str2));
    memset(str_sum,'\0',sizeof(str_sum));

    scanf("%d", &n);

    for (i = 0;i < n;i++){
        scanf("%s %s", str1, str2);

        if (strlen(str1) > 80){
            printf("overflow\n");
            break;
        }
        else if (strlen(str2) > 80){
            printf("overflow\n");
            break;
        }

        if (strlen(str1) > strlen(str2)){
            len = strlen(str1);
        }
        else {
            len = strlen(str2);
        }

        for (j = 0;j < len;j++){
        }

        if (strlen(str_sum) > 80){
            printf("overflow\n");
            break;
        }

        printf("%\n", );
    }

    return 0;
}
