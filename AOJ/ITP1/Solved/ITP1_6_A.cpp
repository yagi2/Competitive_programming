#include <algorithm>
#include <functional>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++){
        scanf(" %d", &array[i]);
    }
    
    for (int i = n - 1; i >= 0; i--){
        if(i != 0){
            printf("%d ", array[i]);
        }
        else {
            printf("%d\n", array[i]);
        }
    }
    return 0;
}
