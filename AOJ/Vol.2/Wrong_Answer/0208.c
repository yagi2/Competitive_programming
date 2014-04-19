#include <stdio.h>

#define MAX 100000000

int num[MAX];

int main(void)
{
    int i;
    int j;

    int room;

    for (i = 1, j = 0; j < MAX;){
        if (i % 10 != 4 && i % 10 != 6 && i / 10 != 4 && i / 10 != 6){
            num[j] = i;
            j++;
        }
        else {
            i++;
        }
    }

    scanf("%d", &room);

    printf("%d\n", num[room - 1]);

    return 0;
}
