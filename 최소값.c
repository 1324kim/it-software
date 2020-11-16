#include <stdio.h>

int main()
{
    int a[10]={0}, i=0, mn=1004;
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++){
        printf("%d ", a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]<mn){
            mn=a[i];
        }
    }
    printf("\n\n%d", mn);
    return 0;
}
