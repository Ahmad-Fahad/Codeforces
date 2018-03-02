#include<stdio.h>
int main()
{
    long long int position = 0,result = 0, key = 1;
    scanf("%I64d",&position);
    if(position <= 5) {
        printf("%I64d\n",key);
    }
    else {
            if(position%5 == 0) {
                result = position / 5;
                printf("%I64d\n",result);
            }
            else {
                result = position/5;
                printf("%I64d\n",result+1);
            }
    }
    return 0;
}
