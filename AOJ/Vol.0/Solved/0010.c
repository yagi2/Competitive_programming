#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double xp, yp;
    double r;
    int i;
    int n;

    scanf("%d", &n);
    
    for (i = 0; i < n; ++i){
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
        xp = ((2*(y2-y1))*(pow(x1,2)-pow(x3,2)+pow(y1,2)-pow(y3,2))-(2*(y3-y1))*(pow(x1,2)-pow(x2,2)+pow(y1,2)-pow(y2,2)))
            /((2*(x2-x1))*(2*(y3-y1))-(2*(x3-x1))*(2*(y2-y1)));
        
        yp = ((pow(x1,2)-pow(x2,2)+pow(y1,2)-pow(y2,2))*(2*(x3-x1))-(pow(x1,2)-pow(x3,2)+pow(y1,2)-pow(y3,2))*(2*(x2-x1))) 
            /((2*(x2-x1))*(2*(y3-y1))-(2*(x3-x1))*(2*(y2-y1)));
        r = sqrt((pow(xp-x1,2))+(pow(yp-y1,2)));
        printf("%.3lf %.3lf %.3lf\n", xp, yp, r);
    }

    return 0;
}
