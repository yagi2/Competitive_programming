#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
    int num[2];
    
    for (int i = 0; ; i++){
        scanf("%d %d", &num[0], &num[1]);
        if (num[0] == 0 && num[1] == 0){
            break;
        }
        sort(num, num+2);
        printf("%d %d\n", num[0], num[1]);
    }

    return 0;
}
