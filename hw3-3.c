#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, a, b, c, temp1, temp2, temp3, i, d, e, f,temp4, temp5, temp6, j;
    scanf("%d %d", &x, &y);
    temp1 = x/1000;
    a = x %1000;
    temp2 = a/100;
    b = a%100;
    temp3 = b/10;
    c = b%10;
    i = temp1+temp2+temp3+c;

    temp4 = y/1000;
    d = y %1000;
    temp5 = d/100;
    e = d%100;
    temp6 = e/10;
    f = e%10;
    j = temp4+temp5+temp6+f;

    if(i>j)
        {
        printf("%d\n", y);
        }
    else if(i<j)
        {
        printf("%d\n", x);
        }
    else
        {
        if(temp1>temp4)
        printf("%d\n", y);
        else
        printf("%d\n", x);
        }

    return 0;
}
