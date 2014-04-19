#include <stdio.h>

int main(void)
{
    int fight_number;
    int A, B;
    int A_num, B_num;
    int i;

    A = B = 0;

    scanf("%d", &fight_number);
    
    for (i = 0; i < fight_number; ++i){
        scanf("%d %d", &A_num, &B_num);

        if (A_num != B_num){
            if (A_num > B_num){
                A++;
            }
            else {
                B++;
            }
        }
    }

    printf("%d %d\n", A, B);

    return 0;
}

    
