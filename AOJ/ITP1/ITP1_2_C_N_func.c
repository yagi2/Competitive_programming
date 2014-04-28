#include <stdio.h>

void Swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void)
{
    int a, b, c;

    scanf(" %d %d %d", &a, &b, &c);

    if (a > b){
        Swap(&a, &b);
    }
    if (b > c){
        Swap(&b, &c);
    }
    if (a > b){
        Swap(&a, &b);
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}
