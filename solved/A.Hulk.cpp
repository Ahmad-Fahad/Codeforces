#include<bits/stdc++.h>
using namespace std;
int main()
{
    string mind[2];
    mind[0] = "I hate";
    mind[1] = "I love";
    int k = 0,i,number = 0;
    cin>>number;
    for(i=0; i<number; i++) {
        cout<<mind[k];
        if(k == 0) {
            k = 1;
        }
        else {
            k = 0;
        }
        if(number > 1 && i < number-1) {
            cout<<" that ";
        }
    }
    cout<<" it";
    cout<<endl;
    return 0;
}
