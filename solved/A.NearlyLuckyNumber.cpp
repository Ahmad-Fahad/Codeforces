#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0,i,j,len = 0;
    string n;
    cin>>n;
    len = n.length();
    for(j=0; j<len; j++) {
        if(n[j] == '4' || n[j] == '7') {
            counter++;
        }
    }

    if(counter == 4 || counter == 7) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
