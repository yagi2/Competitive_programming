#include<stdio.h>

int main(void)
{
    int p1, p2, p3;
    int j1, j2;

    int p_min, j_min;

    scanf("%d %d %d %d %d", &p1, &p2, &p3, &j1, &j2);

    p_min = p1;

    if (p_min > p2){
        p_min = p2;
    }
    else if (p_min > p3){
        p_min = p3;
    }

    j_min = j1;

    if (j_min > j2){
        j_min = j2;
    }

    printf("%d\n", (p_min + j_min) - 50);

    return 0;
}
