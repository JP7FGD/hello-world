#include <stdio.h>
#include <ctype.h>

int main()
{
    int c;

    while((c=getchar()) != EOF){
        c=toupper(c);
        putchar(c);
    }
    
    return 0;
}
