#include <cstring>
#include <cstdio>

int main()
{
    char ch;
    int cnt[500];
    for (int i = 0; i < 500; i++){
        cnt[i] = 0;
    }

    while (scanf(" %c", &ch) != EOF){
        if (ch >= 'A' && ch <= 'Z'){
            ch += 'a' - 'A';
        }
        cnt[ch]++;
    }

    for (int i = 'a'; i <= 'z'; i++){
        printf("%c : %d\n", i, cnt[i]);
    }

    return 0;
}
