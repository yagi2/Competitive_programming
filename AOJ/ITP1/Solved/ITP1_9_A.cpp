#include <cstdio>
#include <cstring>

int main()
{
    char match_word[20];
    char word[500];
    int match_count;

    match_count = 0;
    
    scanf(" %s", match_word);
    for (int i = 0; match_word[i] != '\0'; i++){
        if (match_word[i] >= 'A' && match_word[i] <= 'Z'){
            match_word[i] += 'a' - 'A';
        }
    }
    while (true){
        for (int i = 0; i < 500; i++){
            word[i] = '\0';
        }
        scanf(" %s", word);
        if (!strcmp(word, "END_OF_TEXT")){
            break;
        }
        for (int i = 0; word[i] != '\0'; i++){
            if (word[i] >= 'A' && word[i] <= 'Z'){
                word[i] += 'a' - 'A';
            }
        }
        if (!strcmp(word, match_word)){
            match_count++;
        }
    }

    printf("%d\n", match_count);

    return 0;
}
