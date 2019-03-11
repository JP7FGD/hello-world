#include <stdio.h>
#include <string.h>

main()
{
    int i,a[10];
    char st[10];

    for( i = 0; i <= 9; i++)
    {
        a[i]=i*i;
    }
    for( i = 0; i <= 9; i++)
    {
        printf("%d\n",a[i]);
    }
    strcpy(st,"abcde");
    printf("%s\n",st);
}