#include <cstdio>

int main()
{
    int H, W;
   
    while (1){
        scanf ("%d %d", &H, &W);
        if (W == 0 && W == 0){
            break;
        }

        for (int i = 1; i <= H; i++){
            for (int j = 1; j <= W; j++){
                if (i % 2 == 0){
                    if (j % 2 == 0){
                        printf("#");
                    }
                    else {
                        printf(".");
                    }
                }
                else {
                    if (j % 2 == 0){
                        printf(".");
                    }
                    else {
                        printf("#");
                    }
                }
            }
            printf("\n");
        }
        
        printf("\n");
    }

    return 0;
}
                
