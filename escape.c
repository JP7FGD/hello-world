#include <stdio.h>

int main()
{
    /* code */
    int n;

    n='\a';
    printf("a: %d\n",n);

    printf("t: %d\n",'\t');
    printf("n: %d\n",'\n');

    printf("\aWarning\n");
    printf("False\tEQU\t00H\nTRUE\tEQU\t0FFH\n");
    return 0;
}
