#include <cstdio>
#include <cstring>
int main()
{
    int sum;
    char num[1100];
    for (int i = 0; i < 1100; i++){
        num[i] = 0;
    }

    while (true){
        scanf(" %s", num);
        if (strcmp(num, "0") == 0){
            break;
        }
        sum = 0;
        for (int i = 0; num[i] != '\0'; i++){
            sum += num[i] - '0';
        }

        printf("%d\n", sum);
    }

    return 0;
}
            
