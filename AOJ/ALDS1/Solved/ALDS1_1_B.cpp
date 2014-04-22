#include <cstdio>
#include <algorithm>

using namespace std;

unsigned long long int gcd(unsigned long long int x, unsigned long long int y)
{
    unsigned long long int r;
    if (x < y){
        swap(x, y);
    }

    while (y > 0){
        r = x % y;
        x = y;
        y = r;
    }

    return x;
}
        
int main()
{
    unsigned long long int x, y, tmp;

    scanf (" %llu %llu", &x, &y);

    printf("%llu\n", gcd(x, y));
    
    return 0;
}

    
