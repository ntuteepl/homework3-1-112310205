#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, a, b, c, temp1, temp2, temp3, i, d, e, f,temp4, temp5, temp6, j;
    scanf("%d%d",x,y);
    temp1 = x/1000;
    a = x %1000;
    temp2 = a/100;
    b = a%100;
    temp3 = b/10;
    c = b%10;


    temp4 = y/1000;
    d = y %1000;
    temp5 = d/100;
    e = d%100;
    temp6 = e/10;
    f = e%10;


    if(temp1 == temp4)
        i++;
    if(temp2 == temp5)
        i++;
    if(temp3 == temp6)
        i++;
    if(c == f)
        i++;
        else{
            if(temp4 == temp2,temp3,c)
            {
                i--;
                j++;
            }
            if(temp5 == temp1,temp3,c)
            {
                i--;
                j++;
            }
            if(temp6 == temp1,temp2,c)
            {
                i--;
                j++;
            }
            if(f == temp1,temp2,temp3)
            {
                i--;
                j++;
            }
        }
    printf("%d\n",i,"A",j,"B");


}
