#include<stdio.h>
int main()
{
    int counter = 0,avail = 0,n,i,p,q;
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        scanf("%d%d",&p,&q);
        avail = q - p;
        if(avail >= 2) {
            counter++;
        }
    }
    printf("%d\n",counter);
    return 0;
}
