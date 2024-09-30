#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , a, b , s;
    printf("Entrer  le nombre d'elements :");
    scanf("%d", &n);
    int t[50];
   for(int i = 0 ; i < n ; i++){
    printf("Entrer les elements du tableau :" ,i + 1 );
    scanf("%d",&t[i]);
    }
   printf("Entrer le facteur de multiplication : " );
    scanf("%d", &b);
 for (int i = 0 ; i < n ; i++){
        t[i]= t[i]*b;
     }
 int j = 0;
 while( n > j){
    printf("solution : %d\n", t[j]);

 j++;
 }
    return 0;
}
