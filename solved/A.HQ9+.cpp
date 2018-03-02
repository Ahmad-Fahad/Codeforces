#include<bits/stdc++.h>
using namespace std;
int main()
{
    string code;
    cin>>code;
    int flag = 0,length = code.length();
    for(int i=0;i<length; i++) {
        if(code[i] == 'H' || code[i] == 'Q' || code[i] == '9') {
            flag  = 1;
            break;
        }
    }
    if(flag == 1) {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
