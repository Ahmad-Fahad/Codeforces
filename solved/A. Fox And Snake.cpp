#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k = 0;

    scanf("%d %d",&n,&m);

    for(int i=1; i<=n; i++)
    {
        if(i%2 != 0)
        {
            for(int j=1; j<=m; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else
        {
            if(k == 0)
            {
                for(int j=1; j<=m-1; j++)
                {
                    printf(".");
                }
                printf("#\n");

                k = 1;
            }
            else
            {
                printf("#");

                for(int j=1; j<=m-1; j++)
                {
                    printf(".");
                }
                printf("\n");

                k = 0;
            }
        }
    }
    return 0;
}
