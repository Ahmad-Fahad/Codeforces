#include<stdio.h>
int main()
{
    int length,i,j,temp = 0;
    scanf("%d",&length);
    int box[length];
    for(i=0; i<length; i++) {
        scanf("%d",&box[i]);
    }
    for(i=0; i<length; i++) {
        for(j=0; j<length-1; j++) {
            if(box[j] > box[j+1]) {
                temp     = box[j];
                box[j]   = box[j+1];
                box[j+1] = temp;
            }
        }
    }
    for(i=0; i<length; i++) {
        printf("%d ",box[i]);
    }
    printf("\n");
    return 0;
}
