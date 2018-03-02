#include<stdio.h>
int main()
{
    int i,k = 0,problemnumber = 0;
    int member[3];
    scanf("%d",&problemnumber);
    while(problemnumber--) {
        int c = 0;
        for(i=0; i<3; i++) {
            scanf("%d",&member[i]);
        }
        for(i=0; i<3; i++) {
            if(member[i] == 1) {
                c++;
            }
        }
        if(c >= 2) {
            k++;
        }
    }
    printf("%d\n",k);
    return 0;
}
