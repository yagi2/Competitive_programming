#include <cstdio>

int main()
{
    long long int a, b;
    
    scanf("%lld %lld", &a, &b);

    double c = (double)a/b;
    printf("%lld %lld %.5f\n", a/b, a%b, c);

    return 0;
}
