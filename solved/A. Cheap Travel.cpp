#include<bits/stdc++.h>
using namespace std;
int main()
{
    int result = 0, result1 = 0,result2 = 0, n = 0, m = 0, a = 0, b = 0, q = 0, r = 0;

    scanf("%d %d %d %d",&n, &m, &a, &b);

    if(m*a <= b)
    {
        result = n * a;
    }
    else
    {
        r = n % m;
        q = n / m;

        result1 = (q*b) + b;

        result2 = (q * b) + (r * a) ;

        if(result1 < result2)
        {
            result = result1;
        }
        else
        {
            result = result2;
        }

    }

    printf("%d\n",result);

    return 0;
}
