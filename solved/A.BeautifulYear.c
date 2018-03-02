#include<stdio.h>
int main()
{
    int flag = 0,i = 0,k = 0,y = 0,j,year = 0,length = 0,digit[5];
    scanf("%d",&year);
    while(flag != 1) {
            year = year + 1;
            y    = year;
        while(year != 0) {
            digit[i] = year % 10;
            year = year /10;
            i++;
        }
        length = i;
        for(i=0; i<length; i++) {
            for(j=i+1; j<length; j++) {
                if(digit[i] == digit[j]) {
                    k = 1;
                    break;
                }
            }
            if(k != 1) {
                printf("%d\n",y);
                flag = 1;
                break;
            }
        }

    }

    for(j = 0; j<length; j++) {
        printf("%d\n",digit[j]);
    }
    return 0;
}
