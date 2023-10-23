#include <stdio.h>
#include <stdlib.h>


int main() {
    int s1, d1, s2, d2, s3, d3;
    int c = 0;
    int x = 0;

    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    if (s1 >= x)
    {
        x = d1;
    }
    else
    {
        c++;
        x = d1;
    }

    if (s2 >= x)
    {
        x = d2;
    }
    else
    {
        c++;
        x = d2;
    }

    if (s3 >= x)
    {
        x = d3;
    }
    else
    {
        c++;
    }

    printf("%d\n", c);

    return 0;
}

