#include<stdio.h>
#include<string.h>

int main(void)
{
    int num[5];
    int tmp;
    int i, j;

    memset(num,0,sizeof(num));

    for (i = 0;i < 5;i++){
        scanf("%d", &num[i]);
    }
   
    for (i = 0;i < 4;i++){
        for (j = i + 1;j < 5;j++){
            if (num[i] < num[j]){                
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    for (i = 0;i < 4;i++){
        printf("%d ", num[i]);
    }

    printf("%d\n", num[4]);

    return 0;
}
