#include <stdio.h>

void is_order(int a, int b)
{
    printf("%d ", a);

    if (a < b)
        is_order(a + 1, b);
    if (a > b)
        is_order(a - 1, b);        
}

int main(void)
{
    int a, b;

    scanf("%d%d", &a, &b);
    is_order(a, b);

    return 0;
}