#include <stdio.h>
#include <string.h>

int main() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What would you like to buy ?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; // Remove newline character
    
    printf("What is the price ?: ");
    scanf("%f", &price);
    
    printf("What is the quantity ?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You have bought %d %s\n", quantity, item);   
    printf("The total is: %c%.2f", currency, total);   

    return 0;
}