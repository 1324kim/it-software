#include <stdio.h>

int main()
{
    int line, star, space;
    for(line=1;line<=5;line++){
        for(space=line;space<5;space++)
        printf(" ");
        
        for(star=1;star<=line;star++)
        printf("*");
        
        printf("\n");
    }
    return 0;
}
