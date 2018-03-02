#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,time = 0;
    scanf("%lf%lf",&a,&b);
    while(a != 0) {
        time = time + a;
        a    = round(a / b);
    }
    printf("%lf\n",time);
    return 0;
}
