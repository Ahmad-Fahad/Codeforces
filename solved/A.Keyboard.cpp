#include<bits/stdc++.h>
using namespace std;
int main()
{
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char fingure;
    string message;
    int i,j,Keylength,messagelength;
    cin>>fingure;
    cin>>message;
    Keylength      =  keyboard.length();
    messagelength  =  message.length();
    if(fingure == 'L') {
        for(i=0; i<messagelength; i++) {
        for(j=0; j<Keylength; j++) {
            if(message[i] == keyboard[j]) {
                cout<<keyboard[j+1];
                break;
            }
        }
    }
}
    else if (fingure == 'R') {
        for(i=0; i<messagelength; i++) {
        for(j=0; j<Keylength; j++) {
            if(message[i] == keyboard[j]) {
                cout<<keyboard[j-1];
                break;
            }
        }
    }
}
    cout<<endl;
    return 0;
}
