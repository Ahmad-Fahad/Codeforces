#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

    int value[5];

    scanf("%d %d %d",&a,&b,&c);

    value[0] = a + b * c;

    value[1] = a * (b + c);

    value[2] = a * b * c;

    value[3] = (a + b) * c;

    value[4] = a + b + c;

    int max = value[0];

    for(int i=0; i<5; i++)
    {
        if(max < value[i])
        {
            max = value[i];
        }
    }

    printf("%d\n",max);

    return 0;
}

