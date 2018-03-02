#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0,flag = 0;
    string username;
    cin>>username;
    int length = username.length();
    for(int i=0; i<length; i++) {
        for(int j=i+1; j<length; j++) {
            if(username[i] == username[j]) {
                flag = 1;
                break;
            }
        }
        if(flag != 1) {
            counter++;
        }
        else {
            flag = 0;
        }
    }
    if(counter%2 == 0) {
            printf("CHAT WITH HER!\n");
    }
    else {
            printf("IGNORE HIM!\n");
    }
    return 0;
}
