#include <stdlib.h>
  #include <stdio.h>


int main()
{

printf("Bonjour, quel est votre prénom ?\n");
 char nom [10]; 

       scanf("%10s", nom);

       
     
 printf("Bonjour %s, quel est votre âge ?\n", nom);

 int x;

      scanf("%d", &x );

       int resultat = 2024 - x;

       int resultat2 = resultat + 1;

       printf("%s, si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d\n", nom, resultat, resultat2);

exit(0);

}

