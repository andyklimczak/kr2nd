#include <stdio.h>

int invert(int x, int p, int n);

int main()
{
    int a = 123;
    printf("%d \n", invert(a, 2, 3));
}

int invert( int x, int p, int n )
{
    unsigned int mask = ~( ~0 << n ) << p;

    return x ^ mask;;
}
