#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0,expressionnumber = 0;
    scanf("%d",&expressionnumber);
    string expression;
    while(expressionnumber--) {
        cin>>expression;
        if(expression == "X++"){
            x++;
        }
        else if(expression == "--X") {
            --x;
        }
        else if(expression == "++X") {
            ++x;
        }
        else if(expression == "X--") {
            x--;
        }
    }
    printf("%d\n",x);
    return 0;
}
