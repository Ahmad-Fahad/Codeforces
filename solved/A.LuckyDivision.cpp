#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number,i = 0,k = 0;
    int luckynumbers[14] = {4,7,44,47,74,77,444,447,474,744,477,774,747,777};
    cin>>number;
    for(int i=0; i<14; i++) {
        if(number%luckynumbers[i] == 0) {
            k = 1;
            break;
        }
    }
    if(k == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
