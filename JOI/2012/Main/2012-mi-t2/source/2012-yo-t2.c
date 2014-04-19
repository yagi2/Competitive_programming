#include<stdio.h>
#include<string.h>

int compare_int(const void *a,const void *b){
  return *(int*)b-*(int*)a;
}


int main(void)
{
    int n;
    int i, j , k;
    int team1, team2;
    int t1p, t2p;
    int count;

    scanf("%d", &n);

    int point[n];
    int tmp[n];
    int res[n];

    memset(point,0,sizeof(point));
    memset(res,0,sizeof(res));

    for (i = 0;i < n * (n - 1) / 2;i++){
        scanf("%d %d %d %d", &team1, &team2, &t1p, &t2p);
        
        if (t1p > t2p){
            point[team1 - 1] += 3;
        }
        else if (t1p < t2p){
            point[team2 - 1] += 3;
        }
        else if (t1p == t2p){
            point[team1 - 1] += 1;
            point[team2 - 1] += 1;
        }
    }

    memcpy(tmp,point,sizeof(point));

    qsort(point,n,sizeof(int),compare_int);

    count = 0;

    for (i = 0;i < n;i++){
        for (j = 0;j < n;j++){
            if (point[i] == tmp[j]){
                res[j] = i + 1;
                count++;
            }
        }
        if (count > 1){
            i++;
        }
        count = 0;
    }
    

    for (i = 0;i < n;i++){
        printf("%d\n", res[i]);
    }

    return 0;
}
