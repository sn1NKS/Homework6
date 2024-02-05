#include <stdio.h>

void is_quantity(int n)
{
    if(n > 1)
        is_quantity(n / 2);
    printf("%d", n % 2);
}
    
int main(void)
{
    int n;

    scanf("%d", &n);
    is_quantity(n);

    return 0;
}