#include <stdio.h>

void assign(int *);
int main(void)
{
    int a = 0;
    assign(&a);
    printf("%d", a);

    return 0;
}

void assign(int *a)
{
    *a = 10;
}