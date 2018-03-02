#include<iostream>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int length = word.length();
    for(int i=0; i<length; i++) {
        if(word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' || word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U' || word[i] == 'y' || word[i] == 'Y') {
            cout<<"";
        }
        else if(word[i]>=65 && word[i]<=90){
            cout<<"."<<(char)(word[i]+32);
        }
        else {
            cout<<"."<<word[i];
        }
    }
    return 0;
}
