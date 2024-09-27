#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , min;
    printf("Entrer la taille du tableau :");
    scanf("%d",&n);
     int T[n];
     for(int i = 0 ; i < n ; i++){
        printf("Entrer un nombre :");
        scanf("%d",&T[i]);
     }
     min = T[0];
     for (int i = 0 ; i < n ; i++){
        if(min>T[i]){
            min = T[i];
        }
     }
     printf("%d ", min);
    return 0;
}
