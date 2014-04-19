#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[256];

    scanf("%s", str);

    if (strlen(str) == 1 && str[0] == 'a'){
        printf("-1\n");
    }
    else {
        printf("a\n");
    }

    return 0;
}
