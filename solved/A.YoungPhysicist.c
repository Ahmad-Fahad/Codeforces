#include<stdio.h>
int main() {
    int n,i,sumx=0,sumy=0,sumz=0;
    scanf("%d",&n);
    int arrx[100],arry[100],arrz[100];
    for(i=0; i<n; i++) {
        scanf("%d %d %d",&arrx[i],&arry[i],&arrz[i]);
    }
    for(i=0; i<n; i++) {
        sumx = sumx + arrx[i];
        sumy = sumy + arry[i];
        sumz = sumz + arrz[i];
    }
    if(sumx == 0 && sumy == 0 && sumz == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
return 0;
}
