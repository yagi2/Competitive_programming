#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int num[3];

    for (int i = 0; i < 3; i++){
        scanf("%d", &num[i]);
    }

    sort(num, num+3);
    
    for (int i = 0; i < 3; i++){
        printf("%d", num[i]);
        
        if (i == 2){
            printf("\n");
        }
        else {
            printf(" ");
        }
    }

    return 0;
}
