#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0,b = 0,c = 0,d = 0,e = 0,p = 0,q = 0,r = 0,s = 0,t = 0;
    string word;
    cin>>word;
    int length = word.length();
    if(length < 5) {
        cout<<"NO"<<endl;
    }
    else if(length >= 5) {
        for(int i=0; i<length-4; i++) {
            if(word[i] == 'h') {
                a = i;
                p = 1;
                break;
            }
        }
        if(p == 1) {
            for(int i=a+1; i<length-3; i++) {
                if(word[i] == 'e') {
                    b = i;
                    q = 1;
                    break;
                }
            }
            if(q == 1) {
                for(int i=b+1; i<length-2; i++) {
                    if(word[i] == 'l') {
                        c = i;
                        r = 1;
                        break;
                    }
                }
                if(r == 1) {
                    for(int i=c+1; i<length-1; i++) {
                        if(word[i] == 'l') {
                            d = i;
                            s = 1;
                            break;
                        }
                    }
                    if(s == 1) {
                        for(int i=d+1; i<length; i++){
                            if(word[i] == 'o') {
                                e = i;
                                t = 1;
                                break;
                            }
                        }
                    }
                }
            }
        }
        if(t == 1) {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
