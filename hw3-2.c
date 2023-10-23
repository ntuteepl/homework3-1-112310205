#include <stdio.h>
#include <stdlib.h>


int main() {
    int s1, d1, s2, d2, s3, d3;
    int cars = 0;
    int l = 0;

    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    if (s1 >= l)
    {
        l = d1;
    }
    else
    {
        cars++;
        l = d1;
    }

    if (s2 >= l)
    {
        l = d2;
    }
    else
    {
        cars++;
        l = d2;
    }

    if (s3 >= l)
    {
        l = d3;
    }
    else
    {
        cars++;
    }


    printf("%d\n", cars);

    return 0;
}

