#include<bits/stdc++.h>
using namespace std;
int coins[100000];
int sumofcoins(int start,int coinnumber) {
    int sum = 0;
    for(int i=start; i<coinnumber; i++) {
        sum = sum + coins[i];
    }
    return sum;
}
int main()
{
    int coinnumber,temp = 0,flag = 0,mycoin = 0;
    scanf("%d",&coinnumber);

    for(int i=0; i<coinnumber; i++) {
        scanf("%d",&coins[i]);
    }
    for(int i=0; i<coinnumber; i++) {
        for(int j=0; j<coinnumber-1; j++) {
            if(coins[j] < coins[j+1]) {
                    temp   = coins[j];
                coins[j]   = coins[j+1];
                coins[j+1] = temp;
            }
        }
    }
    for(int i=0; i<coinnumber; i++) {
        int extracoin = sumofcoins(i+1,coinnumber);
        mycoin    = mycoin + coins[i];
        if(mycoin > extracoin) {
            printf("%d\n",i+1);
            break;
        }
    }
    return 0;
}
