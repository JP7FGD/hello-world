#include <stdio.h>

int main()
{
    int i;
    int a[5]={11,12,13,14,15};
    int b[]={301,302,303};
    float c[4]={1.1,1.2,1.3,1.4};
    char d[10]="ABCDEFG";
    char e[]="abcde";

    printf("----- a[5]\n");
    for( i = 0; i <= 4; i++)
  for( i = 0; i <= 4; i++)
    for( i = 0; i <= 4; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("----- b[]\n");
    for( i = 0; i <= 2; i++)
    {
        printf("%d\n",b[i]);
    }
    printf("----- c[4]\n");
    for( i = 0; i <= 3; i++)
    {
        printf("%f\n",c[i]);
    }
    printf("----- d[10]\n");
    printf("%s\n",d);
    printf("----- e[]\n");
    printf("%s\n",e);
    return 0;
}

