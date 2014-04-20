#include <cstdio>

int main()
{
    int card, num;
    bool spade[14] ,heart[14], club[14], dia[14];
    char symbol;
    for (int i = 0; i < 14; i++){
        spade[i] = false;
        club[i] = false;
        heart[i] = false;
        dia[i] = false;
    }

    scanf("%d", &card);
    
    for (int i = 0; i < card; i++){
        scanf(" %c %d", &symbol, &num);

        switch (symbol) {
            case 'S' :
                spade[num] = true;
                break;
            case 'H' :
                heart[num] = true;
                break;
            case 'C':
                club[num] = true;
                break;
            case 'D':
                dia[num] = true;
                break;
        }
    }

    for (int i = 1; i <= 13; i++){
        if (spade[i] == false){
            printf("S %d\n", i);
        }
    }

    for (int i = 1; i <= 13; i++){
        if (heart[i] == false){
            printf("H %d\n", i);
        }
    }

    for (int i = 1; i <= 13; i++){
        if (club[i] == false){
            printf("C %d\n", i);
        }
    }

    for (int i = 1; i <= 13; i++){
        if (dia[i] == false){
            printf("D %d\n", i);
        }
    }
                
    return 0;
}
