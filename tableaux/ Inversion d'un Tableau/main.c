#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10],i,taille;
  printf("donne-moi la taille : ");
  scanf("%d",&taille);
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("entrer la valeur :");
  scanf("%d",&T[i]);
  }
  //--------------------------------
  for(i=taille;i>0;i--){
   printf("le tableau inverse est : %d\n",i);
  }
    return 0;
}
