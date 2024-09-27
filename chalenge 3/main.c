#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[4];
    int i;
    float s  ;
    for ( i = 0 ; i < 4 ; i++)
        {
        printf("Entrer le %d nombre :", i + 1);
        scanf("%f",&T[i]);
    }
    s = 0;
    for( i = 0 ; i < 4; i++)
        s = s + T[i];
    printf("La somme est :%.2f", s);
    return 0;
}
