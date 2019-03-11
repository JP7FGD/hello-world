#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d\n",sizeof(int));
    char c;
    int i;
    long l;
    float f;
    double d;

    c=120;
    i=12345;
    l=1234567890;
    f=1.0/3.0;
    d=1.0/3.0;

    printf("char=%d\n",c);
    printf("int=%d\n",i);
    printf("long=%ld\n",l);
    printf("float=%f\n",f);
    printf("double=%16.14f\n",d);
    return 0;
}
