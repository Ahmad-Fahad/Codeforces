#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int values[4];
    scanf("%d %d %d",&a,&b,&c);
    values[0] = a + b * c;
    values[1] = a * (b + c);
    values[2] = a * b * c;
    values[3] = (a + b) * c;

    int max = values[0];
    for(int i=0; i<4; i++) {
        if(max < values[i]) {
            max = values[i];
        }
    }
    printf("%d\n",max);
    return 0;
}
