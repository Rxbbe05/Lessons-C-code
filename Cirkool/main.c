#include <stdio.h>
int main()
{
  int straal;
  float pi = 3.14159265359;
  printf("Wat is de straal?\n");
  scanf("%d", &straal );

  int resultaat;
  resultaat = straal*straal*pi;
  printf("De oppervlakte is: %d\n", resultaat);

  return 0;
}
