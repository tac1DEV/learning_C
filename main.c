#include <stdio.h>
#include <string.h>

int main() {

    char noun[20] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";
    
    
    printf("Enter an adjective: ");
    //scanf n'accepte pas les espaces
    fgets(adjective1, sizeof(adjective1), stdin);
    //enlever le \n de la fin
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun: ");
    //scanf n'accepte pas les espaces
    fgets(noun, sizeof(noun), stdin);
    //enlever le \n de la fin
    noun[strlen(noun) - 1] = '\0';

    printf("Enter a verb: ");
    //scanf n'accepte pas les espaces
    fgets(verb, sizeof(verb), stdin);
    //enlever le \n de la fin
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective: ");
    //scanf n'accepte pas les espaces
    fgets(adjective2, sizeof(adjective2), stdin);
    //enlever le \n de la fin
    adjective2[strlen(adjective2) - 1] = '\0';
    
    printf("Enter an adjective: ");
    //scanf n'accepte pas les espaces
    fgets(adjective3, sizeof(adjective3), stdin);
    //enlever le \n de la fin
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("\nToday I went to a %s zoo.\n", adjective1);
    printf("I saw a %s in its tree.\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("I was %s.\n", adjective3);
    

    return 0;
}