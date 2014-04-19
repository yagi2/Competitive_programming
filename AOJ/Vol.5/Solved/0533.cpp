#include<cstdio>
#include<algorithm>

using namespace std;

int main(void)
{
    int w[10];
    int k[10];
    int wpt, kpt;
    int i;

    for (i = 0;i < 10;i++){
        scanf("%d", &w[i]);
    }

    for (i = 0;i < 10;i++){
        scanf("%d", &k[i]);
    }

    sort(w, w+10);
    sort(k, k+10);

    wpt = w[9] + w[8] + w[7];
    kpt = k[9] + k[8] + k[7];

    printf("%d %d\n", wpt, kpt); 
                      
    return 0;
}
