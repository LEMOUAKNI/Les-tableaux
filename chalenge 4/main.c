#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , max;
    printf("Entrer la taille du tableau :");
    scanf("%d",&n);
     int T[n];
     for(int i = 0 ; i < n ; i++){
        printf("Entrer un nombre :");
        scanf("%d",&T[i]);
     }
     max = T[0];
     for (int i = 0 ; i < n ; i++){
        if(max<T[i]){
            max = T[i];
        }
     }
     printf("%d ", max);
    return 0;
}
