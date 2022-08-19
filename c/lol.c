#include<universe.h>
#include"testing.c"
int main()
{
    i=20;
    printf("%d",i);
    #undef universe.h;
    printf("%d",i);
}