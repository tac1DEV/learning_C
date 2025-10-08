#include <stdio.h>
#include <string.h>

int main() {
    // printf("Hello, World!\n");

    // int a = 5;
    // float b = 2.5;
    // double pi = 3.14159265358979;

    // printf("Hello, %d!\n", a);
    // printf("Ce produit coute %f€!\n", b);
    // printf("Pi vaut environ %.2f!\n", pi);
    // printf("Pi vaut environ %.15lf!\n", pi);

    int a = 0;
    float b=0.0f;
    char c = '\0';
    char d[30] = "";

    //On assigne une valeur à l'emplacement mémoire de a
    printf("Entrez un entier: ");
    scanf("%d", &a);
    printf("Entrez un decimal: ");
    scanf("%f", &b);
    printf("Entrez une lettre: ");
    // Ajouter un espace avant %c pour eviter de capturer le caractère de nouvelle ligne
    scanf(" %c", &c);

    getchar(); // Pour clear le caractère de nouvelle ligne restant dans le buffer
    printf("Entrez deux mots de (30 carac. max): ");
    fgets(d, sizeof(d), stdin);
    d[strlen(d) - 1] = '\0'; // Enlever le caractère de nouvelle ligne à la fin

    printf("%s\n", d);
    printf("%d\n", a);
    printf("%.2f\n", b);
    printf("%c\n", c);

    return 0;
}