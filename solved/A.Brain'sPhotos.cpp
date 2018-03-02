#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,k = 0;
    scanf("%d %d",&m,&n);
    char photo;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>photo;
            if(photo == 'C' || photo == 'M' || photo == 'Y') {
                k = 1;
            }
        }
        getchar();
    }
    if(k != 1) {
        printf("#Black&White\n");
    }
    else{
        printf("#Color\n");
    }
    return 0;
}
