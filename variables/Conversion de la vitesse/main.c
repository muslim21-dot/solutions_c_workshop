#include <stdio.h>
#include <stdlib.h>

int main()
{
  float vts_km,vts_m;
  printf(" la vitesse en kilom�tres par heure (km/h) :");
  scanf("%f",&vts_km);
  //----------------------------------
  vts_m = vts_km * 1093.61;
  printf("la transforme en m�tres par seconde (m/s) : %.2f",vts_m);
    return 0;
}
