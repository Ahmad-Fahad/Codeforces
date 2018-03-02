#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,k = -1,sum = 0,number = 0;
    cin>>number;
    if(number % 2 == 0) {
        cout<<number/2<<endl;
    }
    else {
        cout<<-1*(number+1)/2<<endl;
    }
    return 0;
}
