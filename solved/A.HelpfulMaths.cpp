#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    string expression;
    cin>>expression;
    int length = expression.length();
    int number[length];
    for(int i=0; i<length; i++) {
        if(i%2 == 0) {
            number[k] = expression[i] -'0';
            k++;
        }
    }
    for(int i=0; i<k; i++) {
        for(int j=0; j<k-1; j++) {
            if(number[j+1] < number[j]) {
                int temp    = number[j];
                number[j]   = number[j+1];
                number[j+1] = temp;
            }
        }
    }
    k = 0;
    for(int i=0; i<length; i++) {
        if(i%2 == 0) {
            cout<<number[k];
            k++;
        }
        else {
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}
