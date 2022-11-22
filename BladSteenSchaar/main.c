#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("Blad, Steen, Schaar\n 0 = Blad\n 1 = Steen\n 2 = Schaar\n ");
    printf("Geef een nummer");
    int blad=0;
    int steen=1;
    int schaar=2;
    int i;
    int choice;
    scanf("%d",&choice);

    int randomnumber;
       randomnumber = rand() % 3;


       if(randomnumber == 1){
           printf("computer kiest blad\n");
     }
       else if(randomnumber == 2){

           printf("computer kiest steen\n");
     }
       else{
           printf("Computer kiest schaar\n");
       }

        if(randomnumber == choice)
        {
            printf("draw");
        }
        else if(randomnumber == 0 && choice == 1 )
        {
            printf("Je verliest! SUKKEL");
        }
        else if(randomnumber == 0 && choice == 2)
        {
          printf("Je wint!");
        }
        else if(randomnumber == 1 && choice == 0)
        {
            printf("Je wint!");
        }
        else if(randomnumber == 1 && choice == 2)
        {
            printf("Je verliest!");
        }
        else if(randomnumber == 2 && choice == 0)
        {
            printf("Je Verliest!");
        }
         else if(randomnumber == 2 && choice == 1){

            printf("Je wint");}

    }










