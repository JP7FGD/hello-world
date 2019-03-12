#include <stdio.h>

int main()
{
    int tanka,kosuu,a,b;

    printf("price=");
    scanf("%d",&tanka);
    printf("count=");
    scanf("%d",&kosuu);
    if (tanka>=1000) {
        tanka=tanka*0.8;
    }
    else
    {
        tanka=tanka*0.9;
    }
    printf("payment=%d\n",tanka*kosuu);
    
    
    return 0;
}
