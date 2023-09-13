#include <stdio.h>

void rotate(int *pa, int *pb, int *pc);
int main(void)
{
    int a = 1, b = 2, c = 3;
    int *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &c;

    char ch;

    printf("%d:%d:%d", *pa, *pb, *pc);
    scanf("%c", &ch);
    while (ch == '\n')
    {
        rotate(pa, pb, pc);
        printf("%d:%d:%d", *pa, *pb, *pc);
        scanf("%c", &ch);
    }

    return 0;
}
void rotate(int *pa, int *pb, int *pc)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = temp;
    return;
}