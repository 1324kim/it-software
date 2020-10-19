#include <stdio.h>

int main()
{
   int i = 0;
   int sum = 0;
   while(i<=100){
       sum = sum + i;
       i = i + 2;
   }
   printf("0부터 100까지의 짝수의 합은?:%d\n",sum);
    return 0;
}
