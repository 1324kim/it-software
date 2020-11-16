#include <stdio.h>

int main()
{
    int a[10]={0}, i, b;
    char put;
    printf("예약 ㄱㄱ?\n");
    scanf("%c", &put);
    if(put=='y'){
        while(1){
            printf("--------------------\n");
            for(i=0;i<10;i++){
                printf("%d ",a[i]);
            }
            printf("\n--------------------\n");
            scanf("%d", &b);
            
            if(a[b-1]==0){
                printf("\n에약됨\n");
                a[b-1]=1;
            }
            else if(a[b-1]==1){
                printf("\n이미 예약됨\n");
                return 0;
            }
        }
    }
}
