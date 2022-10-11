#include <stdio.h>

int total(int x, int y);

int main()
{
    printf("Hello World");
    printf("Total is %d",total(4,5));



    return 0;
}

int total(int x, int y)
{
    return x + y;
}