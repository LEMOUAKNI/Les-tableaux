#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Entrer le nombre d'elements d'un tableau : ");
   scanf("%d",&n);
    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 1;
    }
    int T[n];
    printf("Entrer les elements du tableau  : \n");
    for(int i = 0 ; i < n; i++){
        printf("Element %d :" , i + 1);
        scanf("%d",&T[i]);
        }
        printf("Les elements sont :\n");
        for(int i = 0 ; i < n ; i++ ){
            printf("%d,",T[i]);
        }
        printf("\n");

    return 0;
}
