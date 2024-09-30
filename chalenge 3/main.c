#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[4];
    int i , s;
    for ( i = 0 ; i < 4 ; i++)
        {
        printf("Entrer le %d nombre :", i + 1);
        scanf("%d",&T[i]);
        }
        s = 0;
    for( i = 0 ; i < 4; i++)
        s = s + T[i];
        printf("La somme est :%d", s);
    return 0;
}
