#include <stdio.h>
int main()
{
    int i = 1,j;
    while(i <= 9)
    {
        j = 1 ;
        while(j <= i)
        {
        printf("%d * %d = %2d",i,j,i*j);
        j++ ;
        }
        printf("\n");
        i++ ;
    }
    return 0 ;
}
