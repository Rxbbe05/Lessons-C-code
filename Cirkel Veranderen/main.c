#include <stdio.h>

int main()
{
    printf("Hello World!\n");



    char naam[10];
    int getal;
    char letter;
    printf("geef de naam:");
    scanf("%s", naam);
    printf("geef een getal:");
    scanf("%d",&getal);
    printf("geef een letter:");
    scanf(" %c", &letter);


    naam[getal] = letter;
    printf(naam);
    printf("\n");
    return 0;
}
