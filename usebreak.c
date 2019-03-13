#include <stdio.h>

int main()
{
    int i,n,sum;

    printf("for loop\n");
    sum=0;
    for(i = 1; i <= 10; i++)
    {
        scanf("%d",&n);
        if (n==-1) {
            break;
        }
        sum=sum+n;
    }
    printf("sum=%d\n",sum);

    printf("while loop\n");
    i=10;
    while(1){
        printf("%d\n",i);
        if(i==13)
            break;
        ++i;
    }
    
    return 0;
}
