#include <stdio.h>
#include <stdlib.h>

int main()
{
  float K;
  int C ;
  printf("entrer la temp�rature en Celsius :");
  scanf("%d",&C);
  //----------------------------------
  K = C + 273.15;
  printf("la temp�rature en Kelvin est : %.2f",K);

    return 0;
}
