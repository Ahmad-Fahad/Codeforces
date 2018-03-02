#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);

    long long int arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%I64d",&arr[i][j]);
        }
    }

    int flag = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j] != 1)
            {
                int k = 0;

                for(int x=0; x<n; x++)
                {
                    for(int y=0; y<n; y++)
                    {
                        int sum = arr[x][j] + arr[i][y];

                        if(sum == arr[i][j])
                        {
                            k = 1;
                            break;
                        }
                    }
                }
                if(k != 1)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if(flag == 1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }


    return 0;
}
