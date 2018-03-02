#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string word;
    cin>>word;
    int length = word.length();
    for(int i=0; i<length; i++) {
        if(word[i]>=65 && word[i]<=90) {
            count++;
        }
    }
    int middle = length/2;
    if(count == 0) {
        cout<<word<<endl;
    }
    else if(count <= middle) {
        for(int i=0; i<length; i++) {
        if(word[i]>= 65 && word[i]<=90) {
            printf("%c",word[i]+32);
        }
        else{
            cout<<word[i];
        }
    }
                cout<<endl;
}
    else if(count > middle) {
        for(int i=0; i<length; i++) {
            if(word[i]>=97 && word[i]<=122) {
                printf("%c",word[i]-32);
            }
            else{
                cout<<word[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
