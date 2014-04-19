#include <stdio.h>
#include <stdbool.h>
#define N 1000000

char str[N+10];

int main(void)
{
    int j, o, i;
    int counter;
    bool j_flag, i_flag, o_flag;
    int val;

    j = o = i = 0;
    j_flag = true;
    i_flag = o_flag = false;

    scanf("%s", str);

    for (counter = 0; str[counter] != '\0'; counter++){
        if (str[counter] == 'J'){
            if (j_flag){
                o_flag = true;
                j++;
            }
        }
        else if (str[counter] == 'O'){
            if(o_flag){
                j_flag = false;
                i_flag = true;
                o++;
            }
        }
        else if (str[counter] == 'I'){
            if (i_flag){
                o_flag = false;
                i++;
            }
        }
    }
    
    val = j;
    if (val > o){
        val = o;
    }
    if (val > i){
        val = i;
    }

    printf("%d\n", val);

    return 0;
}
