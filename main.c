#include <stdio.h>
#include <stdbool.h>

int main() {

    float price = 10.00;
    bool isStudent = false;
    bool isMember = false;

    if(isStudent) {
        if(isMember) {
            printf("You get a 30%% discount!\n");
            price *= 0.7;
        }else{
        printf("You get a 10%% discount!\n");
        price *= 0.9;
        }
    }else{
        if(isMember) {
            printf("You get a 20%% discount!\n");
            price *= 0.8;
    }

    printf("Total price: $%.2f\n", price);

    return 0;
}