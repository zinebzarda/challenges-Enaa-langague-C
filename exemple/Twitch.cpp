#include <stdio.h>

int main() {
    float moyenne;

    // Demande � l'utilisateur de saisir sa moyenne
    printf("Entrez votre moyenne : ");
    scanf("%f", &moyenne);

    // Utilisation de la structure switch pour d�terminer la mention
    if (moyenne < 0 || moyenne > 20) {
        printf("La moyenne doit �tre comprise entre 0 et 20.\n");
    } else {
        int noteArrondie = (int)moyenne / 5; // Divise par 5 pour regrouper les notes par tranche de 5

        switch (noteArrondie) {
            case 4:
                printf("Mention : Tr�s bien\n");
                break;
            case 3:
                printf("Mention : Bien\n");
                break;
            case 2:
                printf("Mention : Assez bien\n");
                break;
            default:
                printf("Mention : Passable\n");
                break;
        }
    }

    return 0;
}

