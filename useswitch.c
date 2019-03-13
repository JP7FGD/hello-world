#include <stdio.h>

main()
{
    int a;

    for(a=1; a<=5; a++){
        printf("-----------%d\n",a);
        switch(a){
        case 1:
            printf("a=1\n");
            break;
        case 3:
            printf("a=3\n");
            break;
        case 5:
            printf("a=5\n");
            break;
        default:
            printf("others\n");
        }
    }
}