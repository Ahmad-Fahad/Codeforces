#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[3];

    for(int i=0; i<3; i++)
    {
        scanf("%d",&x[i]);
    }

    int max = x[0];

    for(int i=0; i<3; i++)
    {
        if(max < x[i])
        {
            max = x[i];
        }
    }

    int min = x[0];

    for(int i=0; i<3; i++)
    {
        if(min > x[i])
        {
            min = x[i];
        }
    }

    printf("%d\n",max - min);

    return 0;
}
