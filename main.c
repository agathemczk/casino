#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    char choice;
    float sum=100;
    float bet_player;

    while (1) {
        printf("1. Parier\n");
        printf("2. Retirer\n");
        scanf(" %c",&choice);

        if (choice=='1') {
            printf("Combien voulez-vous miser ? :\n");
            scanf("%f",&bet_player);
            int number=rand() %2 ;

            if (bet_player > sum) {
                printf("Vous ne pouvez pas parier plus que votre somme.\n");
            }

            else if (number == 0 ) {
                sum -= bet_player;
                printf("Perdu !\n");

            } else {
                sum += bet_player;
                printf("Bien joué ! Vous avez doublé votre somme misée.\n");
            }
            printf("Somme actuelle : %.2f euros\n",sum);


        } else if (choice=='2') {
            printf("Vous vous retirez avec une somme de %.2f euros.\n",sum);
            return 0;


        } else {
            printf("Erreur\n");
            return 1;
        }
    }
}
