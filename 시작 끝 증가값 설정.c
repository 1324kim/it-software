#include <stdio.h>

int main()
{
   int start, end, i, sum=0;
   scanf("%d %d %d", &start, &end, &i);
   while(start<=end){
       sum = sum + start;
       start = start +i ;
       
   }
   printf("%d", sum);
    return 0;
}
