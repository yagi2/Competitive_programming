#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int  n;
    unsigned long long int  num_1, num_2;
    char budget_ans[10000] = {'\0'};
    char budget_tmp[10000] = {'\0'};
    char budget_1[10000] = {'\0'};
    char budget_2[10000] = {'\0'};
    int  digit_1 = 0;
    int  digit_2 = 0;
    int  digit_tmp;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i){
        scanf("%llu %llu", &num_1, &num_2);
    
        sprintf(budget_tmp, "%llu", num_1);
        digit_1 = 0;
        for (int j = 0; budget_tmp[j] != '\0'; ++j) digit_1++;
        
        if (digit_1 > 80){
            printf("overflow\n");
        }
        else {
            digit_tmp = digit_1;
            memset(budget_1, '\0', sizeof(budget_1));
            for (int j = 0; digit_tmp >= 0; ++j){
                budget_1[j] = budget_tmp[digit_tmp - 1];
                digit_tmp--;
            }
            
            memset(budget_tmp, '\0', sizeof(budget_tmp));
            sprintf(budget_tmp, "%llu", num_2);

            digit_2 = 0;
            for (int j = 0; budget_tmp[j] != '\0'; ++j) digit_2++;
            
            if (digit_2 > 80){
                printf("overflow\n");
            }
            else {
                digit_tmp = digit_2;
                memset(budget_2, '\0', sizeof(budget_2));
                for (int j = 0; digit_tmp >= 0; ++j){
                    budget_2[j] = budget_tmp[digit_tmp - 1];
                    digit_tmp--;
                }

                for (int j = 0; budget_1[j] != '\0'; ++j){
                    printf("%c", budget_1[j]);
                }
                printf("\n");
                for (int j = 0; budget_2[j] != '\0'; ++j){
                    printf("%c", budget_2[j]);
                }
                printf("\n");
                printf("%d %d\n", digit_1, digit_2);
            }
        }

    return 0;
}
